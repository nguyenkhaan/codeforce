#include <bits/stdc++.h> 
using namespace std; 
void solve() 
{
    long n; cin>>n; 
    vector<long> a(n); 
    for (auto &i:a) cin>>i; //dung cach nay nhap nhin chuyen nghiep hon ne 
    rotate(a.begin(),a.begin()+1,a.end()); 
    //Ham nay se xoay mang sao cho phan tu middle thanh phan tu dau tien 
    //cac phan tu phia truoc middle se duoc di chuyen len dau 
    for (auto x:a) cout<<x<<" "; 
    cout<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--)solve(); 
}