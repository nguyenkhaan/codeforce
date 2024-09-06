#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n,m,k; 
    cin>>n>>m>>k; 
    long long res = min(n,k) * min(m,k);  
    cout<<res<<endl; 
}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}