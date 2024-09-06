#include <bits/stdc++.h>
using namespace std; 
void isOdd(long a, long b, long k) 
{
    long d = 101; 
    for (long i = 0; i<=k/2-1; ++i) 
    {
        cout<<d<<" "<<d<<endl; 
        cout<<-d<<" "<<-d<<endl; 
        ++d; 
    }
    cout<<a*k<<" "<<b*k<<endl; 
}
void isEven(long a, long b, long k) 
{
    long d = 101; 
    cout<<d<<" "<<-d<<endl; 
    ++d; 
    for (long i = 0; i<k/2-1; ++i) 
    {
        cout<<d<<" "<<d<<endl; 
        cout<<-d<<" "<<-d<<endl; 
        ++d; 
    }
    cout<<k*a-101<<" "<<k*b+101<<endl; 
}
void solve() 
{
    long a,b,k; 
    cin>>a>>b>>k; 
    if (k % 2!=0) isOdd(a,b,k);  
    else isEven(a,b,k); 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}