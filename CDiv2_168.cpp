#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; 
    cin>>n; 
    string s; cin>>s; 
    stack<long> st;
    long ans = 0;  
    for (long i = 0; i<n; ++i) 
    {
        if (st.empty() && s[i] == '_') s[i] = '(';  
        if (s[i] == '(') st.push(i); 
        if ((s[i] == '_' || s[i] == ')') && (!st.empty()))
        {
            ans += (i - st.top()); 
            st.pop(); 
        }
    }
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}