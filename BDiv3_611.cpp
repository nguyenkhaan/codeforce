/** Chia quà: 
 * Giả sử có n món quà, chia cho k người. Số món quà một người nhận được là 
 * Tổng số món quà mà k người nhận được: n - n % k 
 * n/k: số quà một người nhận được 
 * n%k: số quà còn dư lại 
 */
#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n,k; 
    cin>>n>>k; 
    long ans = n - n%k; 
    ans += min(k/2,n%k); 
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve();
}