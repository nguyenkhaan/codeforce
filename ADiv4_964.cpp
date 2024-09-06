#include <bits/stdc++.h>
using namespace std; 
int solve() 
{
    int n , k, sum(0);    
    cin>>n; 
    while (n) 
    {
        k = n%10; 
        sum += k; 
        n /= 10; 
    }
    return sum; 
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) 
    {
        cout<<solve()<<endl; 
    }
}