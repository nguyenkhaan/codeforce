#include <bits/stdc++.h>
using namespace std; 
long a,b,c,n,x; 
#define maxn 1000000
//hando_taiya
long get(long a, long b) 
{
    return min((n - a*b)/(a+b) , x - a -b); 
}
void solve() 
{
    long long ans = 0; 
    cin>>n>>x; 
    for (long i = 1; i<=n; i++) 
    {
        for (long j = 1; j<=n/i; j++) 
        {
            a = i; 
            b = j; 
            c = get(a,b); 
            if (c>=1) ans += c; 
        }
    }
    cout<<ans<<endl;  
}
signed main() 
{
    int q; cin>>q; 
    while (q--) solve(); 
}