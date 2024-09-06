#include <bits/stdc++.h>
using namespace std; 
bool t[1000]; 
int x[1000]; 
long a[10][10];  
long long ans; 
void input() {
    for (int i = 1; i<=5; ++i) {
        for (int j = 1; j<=5; ++j) cin>>a[i][j]; 
    }
}
long long calc(int p1, int p2, int p3, int p4, int p5) {
    long res = a[p1][p2] + a[p2][p1] + a[p3][p4] + a[p4][p3]; 
    res += (a[p2][p3] + a[p3][p2] + a[p4][p5] + a[p5][p4]); 
    res += (a[p3][p4] + a[p4][p3]); 
    res += (a[p4][p5] + a[p5][p4]); 
    return res; 
}
void solve() 
{
    ans = max(ans,calc(x[1],x[2],x[3],x[4],x[5])); 
}
void Try(int i) 
{
    for (int j = 1; j<=5; ++j) if (t[j]) 
    {   
        x[i] = j; 
        t[j] = 0; 
        if (i == 5) solve(); 
        else Try(i+1); 
        t[j] = true; 
    }
}
int main() 
{
    memset(t,true,sizeof(t)); 
    memset(x,0,sizeof(x)); 
    input(); 
    ans = 0;
    Try(1); 
    cout<<ans;  
}