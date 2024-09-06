/* Một số lối giải bài toán Tin học 
1. Đưa ra các ví dụ nhỏ thật nhiều, tự giải nó và tìm ra qui luật 
2. Cái gi tốt nhất, tại sao nó lại đi như v, có cách nào lách luật nhanh hơn không 
3. Biến đổi một chút toán học 
4. Khái quát hóa bài toán (cách làm, công thức, vẽ hình mô phỏng...)*/
#include <bits/stdc++.h>
using namespace std; 
void solve() {
    long n; 
    cin>>n; 
    vector<long> a(n+2); 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    if (n == 2 && abs(a[1] - a[0])>1) cout<<"YES"; 
    else cout<<"NO"; 
    cout<<endl; 
}
int main() {
    int T; cin>>T; 
    while (T--) solve(); 
}