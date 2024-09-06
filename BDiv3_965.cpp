#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; cin>>n; 
    string s; cin>>s; 
    set<char> order(s.begin(),s.end()); 
    vector<char> v(order.begin(),order.end());
    map<char,char> mp; 
    for (long i = 0; 2*(i+1) <= v.size(); ++i) 
    {
        mp[v[i]] = v[v.size()-i-1]; 
        mp[v[v.size()-i-1]] = v[i]; 
        // cout<<v[i]<<"   "<<v[v.size()-i-1]<<endl;  
    }
    if (v.size() % 2 != 0) mp[v[v.size()/2]] = v[v.size()/2];  
    for (auto x:s) cout<<mp[x]; 
    cout<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}