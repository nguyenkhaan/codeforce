#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES \n" 
#define NO cout<<"NO \n" 
string s,ss; 
void solve(){
    int n; 
    cin>>n; 
    cin>>s>>ss; 
    bool ok = true; 
    for (int i = 0; i<n; i++){
        if (s[i] == '0' && ss[i] == '1') {
            ok = false; 
            break; 
        }
        if (s[i] == '1') break; 
    }
    if (ok) YES;
    else NO; 
}
int main() 
{
    int T; 
    cin>>T; 
    while (T--) solve(); 
}