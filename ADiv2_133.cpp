#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; 
    cin>>n; 
    if (n == 1) { cout<<"2"<<endl; return; }
    if (n == 2) { cout<<"1"<<endl; return; }
    long long ans1(1000000002),ans2(10000000002),ans; 
    if (n % 2 ==0) ans1 = n / 2; 
    if (n % 3 == 1) {
        long long k = (n - 4) / 3; 
        ans2 = 2 + k; 
    }
    else if (n % 3 == 2) {
        long long k = (n - 2) / 3; 
        ans2 = 1 + k; 
    } else ans2 = (n / 3); 
    ans = min(ans1,ans2); 
    cout<<ans<<endl; 
}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}