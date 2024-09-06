#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n,k; 
    long d = 0; 
    cin>>n>>k; 
    vector<long> a(n+2); 
    for (long  i =0; i<n; ++i) cin>>a[i]; 
    for (long i = 0; i<n; ++i) if (5 - a[i] >= k) ++d; 
    cout<<d/3<<endl; 
}
int main() 
{
    solve(); 
}