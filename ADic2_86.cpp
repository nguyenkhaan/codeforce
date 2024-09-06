#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
void solve() {
    long long x,y; 
    cin>>x>>y; 
    long long a,b;
    cin>>a>>b; 
    b = min(2*a,b); 
    if (x<y) {long long t = x; x = y; y = t;} //so lon da nam phia truoc roi 
    long long res = 1ll*( y*b + (x-y)*a); 
    cout<<res<<endl; 
}
int main() {
    int t; cin>>t; 
    while (t--) solve(); 
}