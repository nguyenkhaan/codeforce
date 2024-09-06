#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
void solve() 
{
    int n;  
    cin>>n; 
    ll res = 1; 
    vector<long> a(n+2); 
    long mi = 100000; 
    for (long i =0; i<n; ++i) {
        cin>>a[i]; 
        mi = min(mi,a[i]); 
    }
    for (long i = 0; i<n; ++i) if (a[i] == mi) {a[i]++; break; } 
    for (long i = 0; i<n; ++i) res *= a[i];  
    cout<<res<<endl;
}
int main() 
{
    int t; cin>>t;
    while (t--) solve(); 
}