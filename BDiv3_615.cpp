#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; 
    cin>>n; 
    string s = ""; 
    vector<pair<long,long>> a(n); 
    for (long i = 0; i<n; ++i) cin>>a[i].first>>a[i].second;  
    a.push_back(make_pair(0,0)); 
    sort(a.begin(),a.end()); 
    for (long i = 1; i<=n; ++i) if (a[i-1].second > a[i].second) {
        cout<<"NO"<<endl; 
        return; 
    }
        long step = 0; 
        for (long i = 1; i<=n; ++i) {
            //Cap nhat buoc sang phai 
            step = a[i].first - a[i-1].first;  
            for (long j = 0; j<step; ++j) s += "R"; 
            //Cap nhat buoc di len 
            step = a[i].second - a[i-1].second;  
            for (long j = 0; j<step; ++j) s += "U"; 
        }
        cout<<"YES"<<endl; 
        cout<<s<<endl;  
}
int main() 
{
    int t; cin>>t; 
    while (t--)solve(); 

}