//https://codeforces.com/problemset/problem/1982/B
//https://codeforces.com/contest/1535/problem/A
#include <bits/stdc++.h>
using namespace std; 
void solve()
{
    long n,start = 0, ans = 0; 
    cin>>n; 
    vector<long> a(n+2); 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    long maxNumber = a[0]; 
    a.push_back(0); 
    long long res = 0; 
    while (start <= n-1) 
    {
        if ((a[start] > 0 && a[start+1]<0) || (a[start] <0 && a[start+1]>0) || (a[start+1] == 0)) 
        {
            res += maxNumber; 
            maxNumber = a[start+1]; 
        }
        start++; 
        maxNumber = max(maxNumber,a[start]); 
    }
    cout<<res<<endl; 

}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}