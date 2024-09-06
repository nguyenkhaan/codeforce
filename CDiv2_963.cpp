/*
1. Median 
2. Pairyti and Sum 
3. Sliding Window 
4. Fun Game: https://codeforces.com/contest/1994/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    long long n,k,ans(0),myMax(0),ansMax(0),ansMin(INT_MAX); 
    cin>>n>>k; 
    vector<long long> a(n+2); 
    for (int i = 0; i<n; ++i) 
    {
        cin>>a[i]; 
        myMax = max(myMax,a[i]); 
    }
    for (int i = 0; i<n; ++i)
    {
        long long temp = (myMax - a[i]) / k; 
        if (temp%2==1) ++temp; 
        a[i] += temp*k; 
        ansMax = max(ansMax,a[i]); 
        ansMin = min(ansMin,a[i]); 
    }
    if (abs(ansMax - ansMin) <= k-1) cout<<ansMax<<endl; 
    else cout<<"-1"<<endl; 
}
int main() 
{
    long T; 
    cin>>T; 
    while(T--) solve(); 
}