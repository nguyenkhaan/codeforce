#include <bits/stdc++.h>
using namespace std; 
bool check(long n) 
{
    if (n == 2) return false; 
    long k = log2(n); 
    if (1<<k == n) return true; 
    return false; 
}
void solve() 
{
    long n; 
    cin>>n; 
    long x = 0; 
    for (long i = 1; i*i<=n; ++i) if (n % i ==0)
    {
        if (check(n/i+1)) {x = i; break;}
        if (check(i+1)) {x = n/i; break;}
    }
    cout<<x<<endl; 
}
int main(){
    int T; cin>>T; 
    while (T--) solve(); 
}