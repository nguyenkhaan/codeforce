#include <bits/stdc++.h>
using namespace std; 
void solve()  
{
    int n; 
    cin>>n; 
    long long i = 1, h = 1; 
    while (n >= i) 
    {
        n-=i; 
        i+=(h + 1); 
        if (n - i >= 0) ++h; 
        else break; 
    }
    cout<<h; 
}
int main() 
{
    solve(); 
}