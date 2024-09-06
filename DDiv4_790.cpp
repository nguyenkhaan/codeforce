#include <bits/stdc++.h> 
using namespace std; 
#define maxRange 210
long m,n; 
int a[maxRange][maxRange];  
void inp() {
    for (long i = 0; i<n; ++i) {
        for (long j = 0; j<m; ++j) cin>>a[i][j]; 
    }
}
void solve() 
{
    cin>>n>>m; 
    for (long i = 0; i<=(n+4); ++i)
    {
        for (long j = 0; j<=(m+4); ++j) a[i][j] = 0; 
    }
    inp(); 
    long ans = 0; 
    long row,column; 
    for (long i = 0; i<n; ++i) 
    {
        for (long j = 0; j<m; ++j) 
        {
            long sum = a[i][j]; 
            row = i, column = j; 
            while (row >0 && column>0) {
                row--; 
                column--; 
                sum += a[row][column]; 
            }
            row = i, column = j;  
            while (row < n && column < m) {
                row++; 
                column++; 
                sum += a[row][column]; 
            }
            row = i, column = j; 
            while (row > 0 && column < m) {
                row--; 
                column++; 
                sum += a[row][column]; 
            }
            row = i, column = j; 
            while (row < n && column > 0) {
                row++; 
                column--; 
                sum += a[row][column]; 
            }
            ans = max(ans,(long)sum); 
        }
    }
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}
