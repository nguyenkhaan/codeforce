#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES \n" 
#define NO cout<<"NO \n" 
void solve() 
{
    long n; 
    cin>>n; 
    vector<long> a(n+2); //seat 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    map<long,long> cnt; 
    cnt.clear(); 
    cnt[a[0]] = 1; 
    bool ok = true; 
    for (long i = 1; i<n; ++i) 
    {
        if (cnt.find(a[i]+1)==cnt.end() && cnt.find(a[i]-1)==cnt.end()) ok = false; 
        if (!ok) break; 
        cnt[a[i]] = 1; 
    }
    if (!ok) NO; 
    else YES; 
}
int main() 
{
    int T; 
    cin>>T; 
    while (T--) solve(); 
}