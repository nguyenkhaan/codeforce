#include <bits/stdc++.h>
using namespace std; 
int n,a[1000]; 
void solve() 
{
    cin>>n;
    for (int i = 0; i<n; i++) cin>>a[i];
    if (n == 1) cout<<a[0]<<endl; 
    else 
    {
        int res = 0; 
        for (int i = 0; i < n; ++i) 
        {
            if ((i % 2 == 0) && ((n-i-1) % 2==0)) res = max(res,a[i]); 
        }
        cout<<res<<endl; 
    }
}
int main() 
{
    int q; cin>>q; 
    while (q--) solve(); 
}