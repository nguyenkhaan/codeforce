#include <bits/stdc++.h>
using namespace std;
#define TEXT "abc"
void solve() 
{
    string s; 
    cin>>s; 
    //1 2     2 3     1 3 
    auto swap = [](string s, int idx1, int idx2) {
        char ch = s[idx1]; 
        s[idx1] = s[idx2]; 
        s[idx2] = ch; 
        return s; 
    }; 
    string s1 = swap(s,0,1); 
    string s2 = swap(s,0,2); 
    string s3 = swap(s,1,2); 
    if (s1 == TEXT || s2 == TEXT || s3 == TEXT || s == TEXT) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}