#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long n,a,b; 
    cin>>n>>a>>b; 
    long long saleLong = min(n,b); 
    long long res = 0; 
    // for (long long i = 1; i<=saleLong; ++i) {
    //     if (b - i + 1 >= a) {
    //         ++d; 
    //         res += (b - i + 1);  
    //     }
    //     else break; 
    // }
    long long iMax = b + 1 - a; 
    // cout<<iMax<<endl; 
    long long d = 0; 
    if (iMax >= 1) {
        d = iMax; 
        res += (b + 1)*min(iMax,n) - ((1 + min(iMax,n))*min(iMax,n))/2; 
    }
    if (d <= n) res += (n - d)*a; 
    cout<<res<<endl; 
}
int main() 
{
    long long t; 
    cin>>t; 
    while (t--) solve(); 
}