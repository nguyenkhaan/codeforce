#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long x,y,n; 
    cin>>x>>y>>n; 
    long long modulo = n % x; 
    if (y<=modulo) {
        n -= (modulo - y); 
        cout<<n<<endl; 
    }
    else 
    {
        long long rem = modulo + 1 + (x - 1 - y); 
        n -= rem; 
        cout<<n<<endl; 
    }
}
int main() 
{
    long long t; cin>>t; 
    while (t--) solve(); 
}