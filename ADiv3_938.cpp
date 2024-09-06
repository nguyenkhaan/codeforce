#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,a,b; 
    cin>>n>>a>>b; 
    long res = (n / 2)*min(2*a,b); 
    n -= (n/2)*2; 
    res += n*a; 
    cout<<res<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}