#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES"<<endl 
#define NO cout<<"NO"<<endl 
void Update(long long &res, string &s, string &t, long long i) 
{
    s[res] = t[i]; 
    res++; 
}
void solve() 
{
    string s,t; 
    cin>>s>>t; 
    long long res = 0; 
    bool canFind;
    for (long long i =0; i<t.size(); i++) 
    {
        canFind = false; 
        while (res < s.size()) 
        {
            
            if (s[res] == '?' || s[res] == t[i]) 
            { 
                Update(res,s,t,i);  
                // cout<<res<<"  "<<i<<endl;
                canFind = true; break; 
            }
            res++; 
        } 
        if (canFind == false) break; 
    }   
    if (canFind) 
    {
        YES; 
        for (long long i = res; i<s.size(); i++) if (s[i] == '?') s[i] = 'a'; 
        cout<<s<<endl; 
    }
    else NO; 
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long q; 
    cin>>q;
    while (q--) solve(); 
}
//hando_taiya