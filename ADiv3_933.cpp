#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,m,k; 
    cin>>n>>m>>k; 
    vector<int> a(n); 
    vector<int> b(m); 
    long cnt = 0; 
    for (int i = 0; i<n; ++i) cin>>a[i]; 
    for (int j = 0; j<m; ++j) cin>>b[j]; 
    for (int i = 0; i<n; ++i) 
    {
        for (int j = 0; j<m; ++j) if (a[i] + b[j] <= k) ++cnt; 
    }
    cout<<cnt<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}