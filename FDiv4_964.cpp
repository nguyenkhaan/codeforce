#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using l = long; 
#define MOD 1000000007
#define maxRange 200000 //OK  
ll fac[maxRange],start;  
l a[maxRange]; 
ll inv(long a, long b){
    ll res = 1; 
    while (b){
        if (b%2 == 1) res = (1ll*res*a)%MOD; 
        a = (1ll*a*a)%MOD;  
        b>>=1;  
    }
    return res % MOD; 
}
void factorial(ll n){
    for (long i = start+1 ; i <= n; ++i) fac[i] = (1ll*fac[i-1]*i) % MOD; 
}
ll C(long k, long n){ 
    if (k > n) return 0; 
    if (k == n || k == 0) return 1; 
    ll res = (1ll*fac[n] * inv(fac[k],MOD-2)) % MOD; 
    res = (1ll*res * inv(fac[n-k], MOD-2)) % MOD; 
    return res; 
}

int main(){
    fac[1] = 1; 
    start = 1; 
    long T; cin>>T; 
    while (T--) {
        l n,k,m(0),ans(0); 
        cin>>n>>k; 
        m = (k-1) / 2; 
        factorial(n+1);  
        start = n; 
        vector<ll> cnt(3,0);
        for (l i = 0; i<n; ++i) {
            cin>>a[i]; 
            cnt[a[i]]++; 
        } 
        for (ll t = (k+1)/2; t<=k; ++t) 
        {
            //t = number 1 
            ll ans1 = 1ll*C(t,cnt[1]); 
            ll ans2 = 1ll*C(k-t,cnt[0]); 
            ans = (ans + (1ll * ans1 * ans2)) % MOD; 
        }
        cout<<ans<<endl; 
    }

}