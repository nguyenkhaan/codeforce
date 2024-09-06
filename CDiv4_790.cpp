#include <bits/stdc++.h>
using namespace std; 
#define MAX 2000000
map<char,int> mp; 
void makeDefault() {
    for (int i = 97; i<=122; ++i) mp[(char)i] = i; 
}
void solve() 
{
    int n,m; 
    cin>>n>>m; 
    long long ans = MAX; 
    vector<string> s(n); 
    for (auto &i : s) cin>>i; 
    for (int i = 0; i<n; ++i) 
    {
        string s1 = s[i]; 
        for (int j = i + 1; j<n; ++j) {
            string s2 = s[j]; 
            long long sum = 0; 
            for (int t = 0; t<m; ++t) sum += abs(mp[s1[t]] - mp[s2[t]]);  
            ans = min(ans,(long long)sum); 
        }
    }
    cout<<ans<<endl; 
}
int main() 
{
    makeDefault(); 
    int t; cin>>t; 
    while (t--) solve(); 
}