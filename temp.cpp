#include <bits/stdc++.h>
using namespace std; 
#define maxn 2e5 + 3
//hando_taiya
void solve() 
{
    int n,q; 
    cin>>n>>q; 
    string s[4]; 
    cin>>s[1]; 
    cin>>s[2]; 
    s[1] = "0" + s[1]; 
    s[2] = "0" + s[2]; 
    int x = 4, y = 28, z = maxn; 
    int pref[x][y][z]; 
    for (int i = 1; i<=2; i++) 
    {
        for (int j = 1; j<=26; j++) 
        {
            for (int t = 1; t<=n; t++) 
            {
                char ch = (char)(j+96); 
                if (ch == s[i][t]) pref[i][j][t] = pref[i][j][t-1] + 1; 
                else pref[i][j][t] = pref[i][j][t-1];  
            }
        }
    }
    while (q--) 
    {
        int l,r; 
        cin>>l>>r; 
        int res = 0; 
        for (int c = 1; c<=26; c++) 
        {
            int num1 = pref[1][c][r] - pref[1][c][l-1]; 
            int num2 = pref[2][c][r] - pref[2][c][l-1]; 
            res += abs(num1 - num2); 
        }
        cout<<(res/2)<<endl; 
    }
}
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; 
    cin>>T; 
    while (T--) solve(); 
}