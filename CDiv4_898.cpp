#include <bits/stdc++.h>
using namespace std; 
#define maxRange 20 
int grid[maxRange][maxRange]; 
char a[maxRange][maxRange]; 
void makeBoard() 
{
    for (int i = 1; i<=10; ++i) grid[1][i] = 1; 
    for (int i = 2; i<=5; ++i) 
    {
        for (int j = 1; j<=10; ++j) {
            if (j<i || j>(10-i+1)) grid[i][j] = grid[i-1][j]; 
            else if (i <= 5) grid[i][j] = i; 
        }
    }
    for (int i = 6; i<=10; ++i) {
        for (int j = 1; j<=10; ++j) grid[i][j] = grid[10 - i + 1][j]; 
    }
}
long inp() 
{
    long res = 0; 
    for (int i = 1; i<=10; ++i) 
    {
        for (int j = 1; j<=10; ++j) {
            char ch; cin>>ch; 
            a[i][j] = ch; 
            if (a[i][j] == 'X') res += grid[i][j]; 
        }
    }
    return res; 
}
void solve() 
{
    cout<<inp()<<endl; 
}
int main() 
{
    makeBoard(); 
    int t; cin>>t; 
    while (t--) solve(); 
}