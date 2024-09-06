#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int x,y; 
    cin>>x>>y; 
    string s1 = bitset<33>(x).to_string(); 
    string s2 = bitset<33>(y).to_string(); 
    int res; 
    for (int i = s1.size()-1; i>=0; --i) if (s1[i] != s2[i]) {
        res = i + 1;
        break; 
    }
    res = 33 - res; 
    cout<<(1<<res)<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}