#include <bits/stdc++.h>
using namespace std; 
void solve() {
    long long n,k,q; 
    cin>>n>>k>>q; 
    vector<long long> a(n+2); 
    for (long long i = 0; i<n; ++i) 
    {
        cin>>a[i]; 
        if (a[i] <= q) a[i] = 1; //Can go 
        else a[i] = 0;  
    } 
    long long count = 0, res =0; 
    for (long long i = 0; i<n; ++i) 
    {
        if (a[i]) count++; //length 
        else
        {
            if (count>=k) res += ((count - k + 1)*(count - k +2))/2; 
            count = 0; 
        }
    }
    if (count >= k) {
        res += ((count - k + 1)*(count - k +2))/2; 
    }
    cout<<res<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}