#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    float x,y; 
    cin>>x>>y; //so luong cell 1 va y 
    long ans1 = ceil((double)(y/2)); 
    long ans2 = 0; 
    x -= (15*ans1 - 4*y); 
    if (x > 0) 
    {
        ans2 = ceil((double)(x / 15)); 
    }
    cout<<(ans1 + ans2)<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}