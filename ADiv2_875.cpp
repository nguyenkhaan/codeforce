#include <bits/stdc++.h>
using namespace std; 
void solve() {
    long n; cin>>n; 
    long k = n + 1; 
    vector<long> a(n+2); 
    for (long i = 0; i<n; ++i) 
    {
        cin>>a[i]; 
        cout<<k-a[i]<<" "; 
    }
    cout<<endl; 
}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}