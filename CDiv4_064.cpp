#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
vector<pair<int,int>> a; 
void setBarrer(int m,int n)
{
    a[0].first = 0; 
    a[0].second = 0; 
    a[n+1].first = m; 
    a[n+1].first = m;
}
void solve() 
{
    long long n,s,m; 
    cin>>n>>s>>m; 
    a.resize(n+2); 
    for (long long i = 1; i<=n; i++) cin>>a[i].first>>a[i].second; 
    setBarrer(m,n); 
    bool canShower = false; 
    for (long long i = 1; i<=(n+1); i++) 
    {
        if (a[i].first - a[i-1].second >=s) 
        {
            canShower = true; 
            break; 
        }
    }
    if (canShower) YES; 
    else NO; 
}
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin>>t;
    while (t--) solve(); 
    return 0; 
}
//hando_taiya