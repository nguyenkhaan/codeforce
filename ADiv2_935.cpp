#include <bits/stdc++.h>
using namespace std; 
#define rep(x,y,z) for (x = (y); x<(z); ++x)
void solve() 
{
    long n; 
    cin>>n; 
    vector<long> a(n); 
    vector<long> b(n); 
    long i; 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    for (long i = 0; i<n; ++i) cin>>b[i]; 
    long res = 0; 
    for (long i = 0; i<n; ++i) {
        long j = i;  
        while (b[j] < a[i]) {
            ++j; 
            if (j == n) break;  
        }
        if (j != n || (j == n && b[n-1] < a[i])) res = max(res,j - i); 
        if (j == i && (b[j] < a[j])) res = max(res,(long)1);
    }
    cout<<res<<endl; 
}
int main() {
    int t; cin>>t; 
    while (t--) solve(); 
}