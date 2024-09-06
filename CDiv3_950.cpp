#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
using l = long;
#define maxRange 200004
#define YES cout<<"YES"<<endl 
#define NO cout<<"NO"<<endl 
l m,n,a[maxRange],b[maxRange],d[maxRange]; 
map<l,l> mp; 
map<l,l> can; 
void input(){
    cin>>n; 
    for (l i = 0; i<n; ++i) cin>>a[i]; 
    for (l i = 0; i<n; ++i){
        cin>>b[i];  
        can[b[i]] = 1; 
    }
    cin>>m; 
    for (l i = 0; i<m; ++i){
        cin>>d[i]; 
        mp[d[i]]++; 
    } 
}
void solve() 
{
    mp.clear(); 
    can.clear(); 
    input(); 
    bool ok = true; 
    for (l i =0; i<n; ++i) 
    {
        if (a[i] != b[i]) 
        {
            mp[b[i]]--; 
            if (mp[b[i]] == -1) {ok = false; break;} 
        }
    }
    if (can.find(d[m-1]) == can.end()) ok = false; 
    if (ok) YES; 
    else NO; 
}
int main() 
{
    int T; 
    cin>>T; 
    while (T--)solve(); 
}
