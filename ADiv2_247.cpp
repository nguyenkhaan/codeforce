#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int a1,a2,a3,a4; 
    cin>>a1>>a2>>a3>>a4; 
    vector<long> a = {0,a1,a2,a3,a4}; 
    string s; 
    cin>>s; 
    long ans = 0; 
    for (long i = 0; i<s.size(); ++i) 
    {
        ans += a[s[i] - '0']; 
    }
    cout<<ans; 
}
int main() 
{
    solve(); 
}