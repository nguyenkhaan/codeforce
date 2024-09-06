#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; 
    cin>>n; 
    vector<long> a(n+1); 
    for (int i = 1; i<=n; ++i) cin>>a[i]; 
    a[0] = 0; 
    sort(a.begin(),a.end()); 
    long ans = 0; 
    for (int i = n; i>=1; i--) ans += a[i] - a[i-1]; 
    cout<<ans - a[1]<<endl; 
}
int main() 
{
    int t; cin>>t;
    while (t--) solve(); 
}