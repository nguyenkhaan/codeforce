#include <bits/stdc++.h>
using namespace std; 
#define maxn 400
int a,b,n; 
void solve() 
{
    cin>>n; 
    int ans = INT_MAX; 
    bool ok = false; 
    for (int i = 0; i<=n/2; i++) 
    {
        a = i; 
        if ((n - 2*a) % 4 == 0)
        {
            b = (n-2*a) / 4; 
           // cout<<a<<"   "<<b<<endl; 
            ans = min(ans,a+b); 
            ok = true; 
        }
    }
    if (ok == true) cout<<ans<<endl; 
    else cout<<"0"<<endl; 
}
int main() 
{
    int q; 
    cin>>q; 
    while(q--) solve(); 
}

