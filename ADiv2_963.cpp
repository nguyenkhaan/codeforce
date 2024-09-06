#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; 
    cin>>n; 
    string s; 
    cin>>s; 
    map<char,int> Score;  
    for (int i = 0; i<s.size(); i++) if (s[i] != '?')
    {
        if (Score[s[i]] < n) Score[s[i]]++; 
    }
    int ans = 0; 
    for (pair<int,int> x : Score) ans += x.second; 
    cout<<ans<<endl; 
}
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q; 
    cin>>q; 
    while (q--) solve(); 
}