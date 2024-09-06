#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; 
    cin>>n; 
    vector<long> a(n+2); 
    long odd = 0; 
    for (long i = 0; i<n; ++i) {
        cin>>a[i]; 
        if (a[i] % 2 !=0) ++odd;  
    }
    if ((odd!=0) && ((odd%2!=0) || (odd%2==0 && odd!=n))) cout<<"YES \n"; 
    else cout<<"NO \n"; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}