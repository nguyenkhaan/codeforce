// if (b[n] > a[i]) -> s - a[i] + b[n] (n--, i++) 
// if (b[n] < a[i]) -> break; 
#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
#define maxRange 100 
ll n,k,a[maxRange],b[maxRange],sum; 
void input() 
{
    for (ll i = 0; i<n; ++i) { cin>>a[i]; sum+=a[i]; } 
    for (ll i = 0; i<n; ++i) cin>>b[i]; 
}
void solve() 
{
    sum = 0; 
    cin>>n>>k; 
    input(); 
    sort(a,a+n); sort(b,b+n);  
    int be = 0, end = n-1;
    for (ll i = 0; i<k; ++i){
        if ((a[be] >= b[end]) || (be == n) || (end == -1)) break; 
        if (a[be] < b[end])
        {
            sum = sum - a[be] + b[end]; 
            be++; 
            end--; 
        }
    }
    cout<<sum<<endl; 

}
int main() 
{
    int T; 
    cin>>T; 
    while (T--) solve(); 
}