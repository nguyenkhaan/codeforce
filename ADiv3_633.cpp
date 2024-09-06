#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long ans = 0; 
    long a,b; 
    cin>>a>>b; 
    if (a == b) {
        cout<<"0"<<endl; 
        return; 
    }
    else if (a > b) 
    {
        if ((a - b) % 2 ==0) ans = 1; 
        else ans = 2; 
    }
    else {
        if ((b - a) % 2 !=0) ans = 1; 
        else ans = 2; 
    }
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}