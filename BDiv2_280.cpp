/*
Ý tưởng của bài toán: Ta gọi d là khoảng cách cần tìm 
- Khoảng cách d tối thiểu chính là khoảng cách max của 2 cái đèn liên tiếp 
sau khi sắp xếp và chia cho 2 (do 2 cái đèn cùng tỏa ánh sáng nên phải / 2) 
--> Đôi khi binary_search cũng chỉ là việc sắp xếp */
#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,l;
    cin>>n>>l; 
    vector<long> a(n); 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    sort(a.begin(),a.end()); 
    double res = 2*max((double)a[0],(double)l - a[n-1]); 
    for (long i = 0; i<n-1; ++i) res = max(res,(double)a[i+1] - a[i]); 
    cout<<fixed<<setprecision(10)<<res/2<<endl; 
}
int main() 
{
    solve(); 
}