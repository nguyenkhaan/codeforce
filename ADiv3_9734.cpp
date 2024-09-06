#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using l = long; 
void solve() 
{
    ll n;
    cin>>n; 
    ll c1 = n/3; 
    ll c2 = n/3; 
    l k = n % 3; 
    if (k == 1) ++c1; 
    if (k == 2) ++c2; 
    cout<<c1<<" "<<c2<<endl; 
}
int main() 
{
    int T; 
    cin>>T; 
    while(T--) solve(); 
}