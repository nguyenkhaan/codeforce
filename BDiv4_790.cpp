#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; 
    cin>>n; 
    vector<long> a(n); 
    long ans = 0; 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    sort(a.begin(),a.end()); 
    for (long i = 1; i<n; ++i) if (a[i] > a[0]) ans += (a[i] - a[0]); 
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}