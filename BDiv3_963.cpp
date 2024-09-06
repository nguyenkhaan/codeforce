#include <bits/stdc++.h>
using namespace std; 
#define maxn 1005 
int a[maxn][maxn],n,k; 
void nhap() 
{
    char ch; 
    for (int i = 1; i<=n; i++) 
    {
        for (int j = 1; j<=n; j++) 
        {
            cin>>ch; 
            a[i][j] = ch - '0'; 
        }
    }
}
void inMang() 
{
    int ans[n/k+5][n/k+5]; 
    for (int i = 1; i<=n/k; i++) 
    {
        for (int j = 1; j<=n/k; j++) ans[i][j] = a[i*k][j*k]; //
    }
    for (int i = 1; i<=n/k; i++) 
    {
        for (int j = 1; j<=n/k; j++) cout<<ans[i][j]; 
        cout<<endl; 
    } 
}
void solve() 
{
    cin>>n>>k; 
    nhap(); 
    // int r(1),c(1); 
    if (n == k) cout<<a[1][1]<<endl; 
    else if (k == 1) 
    {
        for (int i = 1; i<=n; i++)
        {
            for (int j = 1; j<=n; j++) cout<<a[i][j]; 
            cout<<endl; 
        }
    }
    else inMang();   
}
int main() 
{
    int q; 
    cin>>q; 
    while (q--) solve(); 
}