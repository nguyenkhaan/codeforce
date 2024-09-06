#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
#define epsilon 2000
vector<ll> a;
ll ans; 
void binary_search(ll l, ll r, ll x, ll n) 
{
    if (l < r) 
    {
        ll m = (l + r)/2; 
        ll water = 0;
        for (ll i = 0; i<n; ++i) water += max((ll)0,m - a[i]);  
        if (water <= x) 
        {
            ans = m;  
            binary_search(m+1,r,x,n); 
        } else binary_search(l,m,x,n); 
    }
}
void solve() 
{
    ll n,x; 
    cin>>n>>x; 
    a.resize(n+2);  
    ans = 0; 
    for (ll i = 0; i<n; ++i) cin>>a[i]; 
    binary_search(1,(ll)2000000010,x,n); 
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--)  solve(); 
}