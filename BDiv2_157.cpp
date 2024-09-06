#include <bits/stdc++.h>
using namespace std; 
//Tim subsequence dai nhat cua b trong a ung voi tung vi tri cua b 
void solve() 
{
    string a,b; 
    cin>>a; 
    cin>>b;
    int ans = a.size() + b.size(); 
    int m = a.size(), n = b.size(); 
    for (int i = 0; i<b.size(); ++i) 
    {
        int j = i; 
        for (auto c:a) 
        {
            if (b[j] == c && j<b.size()) ++j; 
        }
        ans = min(ans, m+n - (j-i)); 
    }
    cout<<ans<<endl; 
}
int main() 
{
    long T; 
    cin>>T; 
    while (T--) solve(); 
}