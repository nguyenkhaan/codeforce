#include <bits/stdc++.h>
using namespace std; 
#define rep(x,y,z) for (x = (y); x<(z); ++x) 
void solve() 
{
    int n; 
    cin>>n; 
    vector<int> a(n); 
    int i; 
    rep(i,0,n) cin>>a[i]; 
    int ma = 0;  
    rep(i,0,n-1) ma = max(ma,a[i]); 
    int res = ma + a[n-1]; 
    cout<<res<<endl; 
    
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) solve(); 
}