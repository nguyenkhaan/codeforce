#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    long n; cin>>n; 
    vector<long long> a(n+3); 
    for (long i = 1; i<=n; ++i) cin>>a[i]; 
    string s; cin>>s; 
    s = "a" + s; 
    vector<long long> pre(n+3,0); 
    pre[1] = a[1]; 
    for (long i = 2; i<=n; ++i) pre[i] = pre[i-1] + a[i]; 
    long be(1), end(n);
    long long res(0); 
    while (be < end && be>=1 && end>=1 && be<=n && end<=n) 
    {
        while (s[be] != 'L' && be<n) ++be; 
        while (s[end] != 'R' && end>1) --end;  
        if (be < end && be>=1 && end>=1 && end<=n && be<=n) res += pre[end] - pre[be-1];  
        ++be; 
        --end; 
    }
    cout<<res<<endl; 
}
int main() 
{
    int T;
    cin>>T; 
    while (T--) solve(); 
}