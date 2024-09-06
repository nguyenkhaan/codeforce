#include <bits/stdc++.h>
using namespace std; 
#define TEST "Division " 
void solve() 
{
    int x;
    cin>>x; 
    if (x >= 1900) cout<<TEST<<"1"; 
    else if (1600<=x && x<=1899) cout<<TEST<<"2"; 
    else if (1400<=x && x<=1599) cout<<TEST<<"3";  
    else cout<<TEST<<"4"; 
    cout<<endl; 
}
int main() 
{
    int t; cin>>t;
    while (t--) solve(); 
}