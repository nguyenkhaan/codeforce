#include <bits/stdc++.h>
using namespace std;  
using ll = long long; 
ll luyThua(int x) {
    return (ll)pow(10,x); 
}
void solve() {
    string s; 
    cin>>s; 
    ll k = luyThua(s.size()-1);  
    ll n = stoll(s),temp = 0,res = 0; 
    while (n) 
    {
        res += (s[0] - '0')*k;  
        n = n - (s[0] - '0')*k + (s[0] - '0')*k/10;  
        s = to_string(n);  
        k = luyThua(s.size()-1); 
    }
    cout<<res<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}