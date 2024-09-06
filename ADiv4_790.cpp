#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s; 
    cin>>s; 
    long ans1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0'); 
    long ans2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0'); 
    if (ans1 == ans2) cout<<"YES \n"; 
    else cout<<"NO \n"; 

}
int main() {
    int t; cin>>t; 
    while (t--) solve(); 
}