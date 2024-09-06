#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
void solve() 
{
    long n; 
    cin>>n; 
    if (n / 2 % 2 !=0) {NO; return;} 
    long range = (n / 2),d = 0; 
    vector<long> even; 
    vector<long> odd; 
    for (long i = 0; i<range; ++i) {
        d+=2; 
        even.push_back(d); 
        odd.push_back(d-1); 
    }
    odd[odd.size()-1] += range;
    YES; 
    for (auto c:even) cout<<c<<" "; 
    for (auto c:odd) cout<<c<<" ";
    cout<<endl; 
}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}