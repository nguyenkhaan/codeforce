#include <bits/stdc++.h>
using namespace std; 
#define ok do {cout<<"0 \n"; return; } while(0) 
long n; 
void solve() 
{
    cin>>n; 
    vector<long long> a(n+2); 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    long long odd(0),oddmax(0),ans(0); 
    vector<long> even; 
    for (long i = 0; i<n; ++i) 
    {
        if (a[i] % 2 !=0) {oddmax = max(oddmax,a[i]); ++odd;}
        else even.push_back(a[i]);  
    }
    sort(even.begin(),even.end()); 
    if (odd == 0 || odd == n) ok; 
    for (long i = 0; i<even.size(); ++i) 
    {
        if (oddmax>=even[i])
        {
            oddmax += even[i]; 
            ++ans; 
        }
        else {oddmax += even[even.size()-1]; ans+=2; }
    }
    cout<<ans<<endl; 
}
int main() 
{
    long long T; 
    cin>>T; 
    while (T--) solve(); 
}