//https://codeforces.com/problemset/problem/1987/C
// -> wait second 
// strictly great -> wait 1 second 
// less -> wait (lon - be + 1) 
// -> wait[i] = wait[i+1] + (1) + (lon - be + 1) 
#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
using l = long; 
#define maxRange 1000000005
l n; 
vector<l> a; 
void solve() 
{
    cin>>n; 
    a.resize(n+2);
    for (int i = 0; i<n; ++i) cin>>a[i]; 
    vector<l> wait(n+2); 
    fill(wait.begin(),wait.end(), 0); 
    wait[n-1] = a[n-1]; 
    l ans = a[n-1]; 
    for (int i = n-2; i>=0; --i) 
    {
        wait[i] = max(a[i],wait[i+1]+1); 
        ans = max(ans,wait[i]); 
    }
    cout<<ans<<endl; 
}
int main()
{
    int T; cin>>T; 
    while(T--) solve(); 
}