#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; 
    cin>>n; 
    string s; 
    cin>>s; 
    string s1 = ""; 
    string s2 = ""; 
    for (int i = 0; i<=s.size() / 2; ++i) s1 += string(1,s[i]); 
    for (int i = s.size() / 2 + 1; i<s.size(); ++i) s2 += string(1,s[i]); 
    cout<<s1<<"  "<<s2<<endl; 
}
int main() 
{
    solve(); 
}