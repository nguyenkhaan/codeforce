#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,k; 
    cin>>n>>k; 
    if (k == 1) {
        for (int i = 1; i<=(n-1); ++i) cout<<"1"<<" "; 
        cout<<"2"<<endl;  
    }
    else if (k == n) {
        for (int i = 1; i<=n; ++i) cout<<"1"<<" ";  
        cout<<endl; 
    }
    else cout<<"-1"<<endl;
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}