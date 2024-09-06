#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
ll n; 
void solve() 
{
    cin>>n; 
    map<long,long> cnt;  
    vector<ll> a(n);  
    for (ll i = 0; i<n; ++i){
        cin>>a[i];
        cnt[a[i]]++; 
    }
    for (pair<long,long> x : cnt) if (x.second % 2 != 0){
        cout<<"YES \n"; 
        return; 
    }
    cout<<"NO \n"; 
}
int main() 
{
    long T; 
    cin>>T; 
    while (T--) solve(); 
}