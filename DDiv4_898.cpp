#include <bits/stdc++.h>
using namespace std; 
#define maxRange 200005
void solve() 
{
    long n,k,res(0),black(0); 
    string s; 
    cin>>n>>k; 
    cin>>s;
    s = "a" + s; 
    long preb[maxRange]; 
    preb[0] = 0; 
    for (long i = 1; i<=n; ++i) {
        if (s[i] == 'B') { preb[i] = 1 + preb[i-1]; ++black; } 
        else preb[i] = preb[i-1];
    }
    long l = 1; 
    while (l <= n) 
    {
        while (s[l] != 'B') ++l; 
        if  (l > n) break; 
        long r = min(n,k+l-1); 
        black -= (preb[r] - preb[l-1]); 
        l = r + 1; 
        ++res; 
        if (black <= 0) break; 
    }
    cout<<res<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}