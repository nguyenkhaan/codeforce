#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long a,b,c; 
    cin>>a>>b>>c; 
    bool ok = 0; 
    ok |= (((a  + c) % (2*b) == 0) && (a + c > 0));
    ok |= ((2*b - a) % c == 0 && (2*b > a)); 
    ok |= ((2*b - c) % a == 0 && (2*b > c)); 
    if (ok) cout<<"YES \n"; 
    else cout<<"NO \n"; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}