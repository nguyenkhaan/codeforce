//Ý tưởng bài toán 
// - Ta phải chú ý tới điều kiện at most 1 connected column 
// TH1: không có vùng connected nào: 
// TH2: có 1 vùng connected 
/*
1. Có gì đặc biệt trong bài toán không 
2. Có gì để bỏ luật (cách gì mình nghĩ đầu tiên và hơi thô), tính nhanh hơn không 
3. Áp dụng 1 chút toán học vô 
4. Vẽ các ví dụ free style, nhiều dô 

*/
#include <bits/stdc++.h>
using namespace std; 
#define maxRange 200005
void solve() 
{
    long n; 
    cin>>n; 
    char s[3][maxRange];  
    for (long i = 0; i<2; ++i) 
    {
        for (long j = 0; j<n; ++j) {
            char ch; 
            cin>>ch; 
            s[i][j] = ch; 
        }
    }
    long ans = 0; 
    for (long i = 1; i<n-1; ++i) 
    {
        bool ok = true; 
        ok &= (s[0][i] == s[1][i]); 
        ok &= (s[0][i-1] == s[0][i+1]); 
        ok &= (s[1][i-1] == s[1][i+1]); 
        ok &= (s[0][i-1] != s[1][i-1]); 
        ans += ok; 
    }
    cout<<ans<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}