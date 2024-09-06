#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
long ans; 
bool ok;
void binary_search(long l, long r, vector<long> pre,long y,long n) 
{
    // if (l <= r && ok) {
    //     long m = (l + r) / 2; 
    //     if (l == r) ok = false; 
    //     if (pre[n] - pre[n-m] >= y) {
    //         ans = m; 
    //         binary_search(l,m,pre,y,n); 
    //     } else binary_search(m+1,r,pre,y,n); 
    // }
    while (l <= r) 
    {
        long m = (l + r) / 2; 
        if (pre[n] - pre[n-m] >= y) {
            ans = m; 
            r = m-1; 
        }
        else l = m + 1; 
    }
}
void solve() 
{
    long n,q; 
    cin>>n>>q; 
    vector<long> a(n+1); 
    vector<long> pre(n+1); 
    a[0] = 0; 
    for (long i = 1; i<=n; ++i) cin>>a[i]; 
    sort(a.begin(),a.end()); 
    pre[0] = 0;
    for (long i = 1; i<=n; ++i) pre[i] = a[i] + pre[i-1]; 
    for (long x = 0; x<q; ++x)  
    {
        ans = -1; 
        long y; 
        long l = 1, r= n; 
        cin>>y;  
        if (y > pre[n]) cout<<"-1"<<endl; 
        else if (y == pre[n]) cout<<n<<endl; 
        else 
        {
            while (l <= r) 
            {
            long m = (l + r) / 2; 
            if (pre[n] - pre[n-m] >= y) {
                ans = m; 
                r = m-1; 
            }
            else l = m + 1; 
            }
            cout<<ans<<endl; 
        }
    }
}
int main() 
{
    int t; cin>>t; 
    while (t--)
    solve(); 
}