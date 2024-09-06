#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    //a1 a2 b1 b2 --> (a1,b1) (a2,b2); 
    pair<int,int> a,b; 
    cin>>a.first>>a.second>>b.first>>b.second; 
    int ans = 0; 
    if (a.first > b.first && a.second >= b.second) ans+=2; 
    else if (a.first >= b.first && a.second > b.second) ans+=2; 
    if (a.first > b.second && a.second >= b.first) ans+=2; 
    else if (a.first >= b.second && a.second > b.first) ans+=2; 
    cout<<ans<<endl; 
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) solve();  
}
//hando_taiya