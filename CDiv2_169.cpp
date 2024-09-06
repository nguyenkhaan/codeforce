//Cập nhật bài toán này vào sổ đi -> Mở rộng định lí hiệu nhỏ nhất 
#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
void solve() 
{
    ll n,k,res(0); 
    cin>>n>>k; 
    vector<ll> a(n); 
    for (ll i = 0; i<n; ++i) cin>>a[i]; 
    sort(a.begin(),a.end(),greater<ll>()); 
    for (long i = 0; i<n; ++i) {
        if (i % 2 == 0) res += a[i]; 
        else {
            ll add = min(k,a[i-1] - a[i]); 
            a[i] += add; 
            k -= add; 
            res -= a[i]; 
        }
    }
    cout<<res<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}