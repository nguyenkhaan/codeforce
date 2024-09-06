//1. Cách thực thực hiện với đpt tối thiểu 
//2. Kiến thức toán học và thuật toán có thể áp dụng 
//3. Cách lách luật
#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; cin>>n; 
    vector<long> a(n); 
    for (auto &i : a) cin>>i; 
    sort(a.begin(),a.end()); 
    cout<<a[n/2]<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}