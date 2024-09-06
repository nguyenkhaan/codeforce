#include <bits/stdc++.h>
using namespace std; 
bool ok; 
int b = 0, c = 0; 
void divisor(long n, long a) 
{
    for (long i = 2; i*i<=n; ++i) if ( n % i == 0) {
        b = i; 
        c = n / i; 
        if (a!=b && c!=a && c!=b) {
            cout<<"YES"<<endl; 
            ok = true; 
            cout<<a<<" "<<b<<" "<<c<<endl; 
            return; 
        }
    }
}
void solve() 
{
    long n; 
    cin>>n; 
    ok = false; 
    for (long a = 2; a*a<n; ++a) {
        if (n % a == 0) divisor(n / a,a); 
        if (ok) return; 
    }
    cout<<"NO"<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}