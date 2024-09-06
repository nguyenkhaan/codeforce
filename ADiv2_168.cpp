#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s; 
    cin>>s; 
    s += s[s.size()-1]; 
    long pos = 0; 
    for (long i = 0; i<s.size()-1; ++i) if (s[i] == s[i+1]) {
        pos = i; 
        break; 
    }
    char ch = 'a'; 
    if (s[pos] == 'a') ch = 'z';
    for (long i = 0; i<=pos; ++i) cout<<s[i]; 
    cout<<ch; 
    for (long i = pos+1; i<s.size()-1; ++i) cout<<s[i]; 
    cout<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}