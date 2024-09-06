#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; 
    cin>>n; 
    long j; 
    vector<long> a(n); 
    for (auto &i : a) cin>>i; 
    map<long,long> cnt; 
    long ma = 1; 
    for (long i = 0; i<n; ++i) {
        cnt[a[i]]++; 
        ma = max(ma,cnt[a[i]]); 
    }
    cout<<n - ma<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}