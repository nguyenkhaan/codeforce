#include <bits/stdc++.h>
using namespace std; 
void solve()
{
    string s; 
    cin>>s; 
    bool ok = false; 
    if (s ==  "10" || s == "101") {cout<<"NO\n"; return; }
    if (s.size()>=3 && s[2] == '0' && s[0] == '1' && s[1] == '0') {cout<<"NO\n"; return; }
    if (s.size()>=3 && s[2]!='0' && s[0] == '1' && s[1] == '0') ok = true; 
    if (ok) cout<<"YES \n"; 
    else cout<<"NO \n"; 
}
int main() 
{
    int T; cin>>T; 
    while(T--) solve(); 
}