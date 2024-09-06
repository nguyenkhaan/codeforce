#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES \n" 
#define NO cout<<"NO \n"
void solve() 
{
    int a,b,c,d; 
    cin>>a>>b>>c>>d; 
    vector<int> s = {a,b,c,d};
    sort(s.begin(),s.end()); 
    if (a < b) a = b; 
    if (c < d) c = d; 
    if (a > c) {int t = a; a = c; c = t; } 
    if (a == *(s.begin()+2) && c == *(s.begin()+3)) YES; 
    else NO; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}