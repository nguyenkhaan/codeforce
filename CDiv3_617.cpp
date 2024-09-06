//https://codeforces.com/contest/1296/problem/C
/*
Giaỉ thuật bài toán này đơn giản thế này 
- Tạo một map chứa tọa độ của robot đã đi qua tại vị trí i 
map<pair<int,int>,int> mp = i 
- Trong quá trình xét, nếu như ta thấy tọa độ đó đã tồn tại trong map thì ta 
tiến hành so sánh đoạn cần bỏ -> tìm ra đoạn min  */
#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n; cin>>n; 
    string s; cin>>s; 
    long l = -1, r = n; 
    map<pair<long,long>,long> mp; //Luu tru cac index da di qua 
    pair<long,long> pos = make_pair(0,0); 
    mp[pos] = 0; 
    for (long i = 0; i<n; ++i) 
    {
        if (s[i] == 'R') pos.first++; 
        if (s[i] == 'L') pos.first--; 
        if (s[i] == 'U') pos.second++; 
        if (s[i] == 'D') pos.second--; 
        if (mp.count(pos)) {
            if (i - mp[pos] <= r - l) {r = i; l = mp[pos]; }
        }
        mp[pos] = i + 1; 
    }
    if (l == -1) cout<<l<<endl; 
    else cout<<l+1<<" "<<r+1<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}