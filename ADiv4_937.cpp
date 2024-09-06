#include <bits/stdc++.h>
using namespace std; 
#define STAIR cout<<"STAIR"<<endl
#define PEAK cout<<"PEAK"<<endl
#define NONE cout<<"NONE"<<endl 
void solve() 
{
    int a,b,c; 
    cin>>a>>b>>c; 
    if (a<b && b<c) STAIR; 
    else if (a<b && b>c) PEAK; 
    else NONE; 
}
int main() 
{
    int t; cin>>t; 
    while (t--)solve(); 
}