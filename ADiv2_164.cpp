#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
#define is(m,n) ((m <= n)?true:false) 
void solve() 
{
    ll n,m,k; 
    cin>>m>>n>>k; 
    ll color; 
    if (is(m,n)) color = m;  
    else color = n;  
    cout<< ((color <= k)?"NO":"YES")<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}
