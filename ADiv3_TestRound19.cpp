#include <bits/stdc++.h>
using namespace std; 
#define rep(x,y,z) for (x = (y); x<(z); ++x)
void solve() 
{
    int n; 
    cin>>n; 
    int i; 
    vector<long> a(n); 
    rep(i,0,n) cin>>a[i];
    int res = 0; 
    rep(i,0,n) 
    {
        if (i % 2 == 0) res += a[i]; 
        else res -= a[i]; 
    }
    cout<<res<<endl;  
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) solve(); 
}
