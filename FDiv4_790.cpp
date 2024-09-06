#include <bits/stdc++.h>
#define MAX 10000000001
using namespace std; 
void solve() 
{
    long n,k; 
    cin>>n>>k; 
    map<long,long> mp; 
    vector<long> a(n+2); 
    for (long i = 0; i<n; ++i) {
        cin>>a[i]; 
        mp[a[i]]++; 
    } 
    vector<long> appear; 
    for (pair<long,long> x : mp) if (x.second >= k) appear.push_back(x.first);  
    sort(appear.begin(),appear.end()); 
    appear.push_back(MAX); 
    long ans = 1; 
    long l = 0, r = 0;
    long ansl = appear[0], ansr = appear[0]; 
    while (r < appear.size()) 
    {
        r++; 
        if ( (r < appear.size()) && (l < appear.size()) && (appear[r] - appear[r - 1] > 1)) {
            if (r - l > ans) {
                ans = r - l; 
                ansr = appear[r-1]; 
                ansl = appear[l]; 
            }
            l = r; 
        }
    }
    if (appear.size() == 1) cout<<"-1"<<endl; 
    else cout<<ansl<<" "<<ansr<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}