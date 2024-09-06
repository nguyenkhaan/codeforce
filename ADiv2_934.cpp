#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,k; 
    cin>>n>>k; 
    int b = n*(n - 1) / 2; 
    if (b - k <= 0 || k >= n - 1) {
        cout<<"1"<<endl; 
        return; 
    }
    else cout<<n<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}