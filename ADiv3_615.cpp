#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long a,b,c,n; 
    cin>>a>>b>>c>>n; 
    if (((a + b + c + n) % 3) != 0) {
        cout<<"NO \n"; 
        return ; 
    }
    else 
    {
        long m = (a + b + c + n)/3; 
        if (m >= a && m>=b && m>=c) cout<<"YES \n"; 
        else cout<<"NO \n"; 
    }
}
int main()
{
    
    int t; cin>>t; 
    while (t--) solve(); 
}