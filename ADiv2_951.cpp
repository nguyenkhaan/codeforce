#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long n; 
    cin>>n; 
    vector<long long> a(n); 
    for (long long i =0; i<n; ++i) cin>>a[i]; 
    long long k = 2; 
    long long m,res(10000000000); 
    for (long long L = 0, R = L + k -1; R<n; ++L, ++R) {
        m = max(a[L],a[R]); 
        res = min(res,m);  
    }
    cout<<res-1<<endl; 
}
int main() 
{
    long long t; 
    cin>>t; 
    while (t--) solve(); 
}