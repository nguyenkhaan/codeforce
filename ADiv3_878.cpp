#include <bits/stdc++.h>
using namespace std; 
void solve() {
    long n; 
    cin>>n; 
    string s; 
    cin>>s; 
    string a = "";  a += string(1,s[0]); 
    long i = 1;  
    while (i < s.size()) {
        while (s[i] != a[a.size()-1]) i++; 
        if (i+1<=s.size()-1) a += string(1,s[i+1]); 
        i += 2; 
    }
    cout<<a<<endl; 
}
int main() {
    int T; cin>>T; 
    while (T--) solve(); 
}