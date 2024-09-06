#include <bits/stdc++.h>
//Dinh li bitset 
using namespace std; 
void solve() {
    long long n,k;
    cin>>n>>k; 
    if (k>=30) {cout<<(n+1)<<endl; return; }
    long long res = min(1ll*(1<<k),n+1); 
    cout<<res<<endl;
}
int main() {
    int t; cin>>t; 
    while (t--) solve(); 
}