#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long l,r; 
    long L,R; 
    cin>>l>>r; 
    cin>>L>>R; 
    map<pair<long,long>,long> door; 
    for (long i = l; i<=r; ++i) 
    {
        if (i == L-1 || i == L) door[make_pair(i,i+1)] = 1;  
        if (i == R || i == R + 1) door[make_pair(i-1,i)] = 1;  
        if (i >L && i<R) {
            door[make_pair(i-1,i)] = 1; 
            door[make_pair(i,i+1)] = 1; 
        }
        if (i > R + 1) break; 
    }
    long ans = max((long)1,(long)door.size()); 
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}