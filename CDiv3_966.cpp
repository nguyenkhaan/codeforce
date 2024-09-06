#include <bits/stdc++.h>
using namespace std; 
bool mt(vector<long>a, string s, int n) 
{
    unordered_map<long,char> ntc; 
    ntc.clear();
    unordered_map<char,long> ctn; 
    ctn.clear(); 
    for (long i = 0; i<n; ++i) 
    {
        if (ntc.count(a[i]) && ntc[a[i]]!=s[i]) return false; 
        if (ctn.count(s[i]) && ctn[s[i]]!=a[i]) return false; 
        ntc[a[i]] = s[i]; 
        ctn[s[i]] = a[i]; 
    }
    return true; 
}
void solve() 
{
    long n; cin>>n; 
    vector<long> a(n+2,0); 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    long m; cin>>m; 
    vector<string> s(m+2,""); 
    for (long i = 0; i<m; ++i) cin>>s[i]; 
    for (long i = 0; i<m; ++i)
    {
        bool ok = false; 
        if (s[i].length() != n) {cout<<"NO\n"; ok = true; } 
        else 
        {
            if (mt(a,s[i],n)) { cout<<"YES \n"; ok = true; }
        }
        if (!ok) cout<<"NO\n"; 
    }
}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}