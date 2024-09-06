/*Ý tưởng: sử dụng phương pháp mảng đánh dấu -> used[a[i]] đã xuất hiện rồi 
Liệu có trường hợp nào mà a[i] > a[j] nhưng chia thì a[i] sẽ xuống nhỏ hơn a[j] không 
--> Ta tiến hành sort để đảm bảo điều đó không thể xảy ra vì các số nhỏ hơn 
trong hoán vị đa cập nhật rồi thì cac số lớn chia xuống nó không được nhỏ hơn các số 
nhỏ đó */
#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n; 
    cin>>n; 
    vector<long> a(n); 
    for (auto &i : a) cin>>i; 
    sort(a.begin(),a.end()); 
    bool used[n+2];  
    bool ok = 1; 
    memset(used,false,sizeof(used)); 
    for (int i = 0; i<n; ++i) 
    {
        while (a[i] > n) a[i] /=2; 
        while (used[a[i]]) {
            a[i] /=2; 
            if (a[i] == 0) { ok = false; break; }
        } 
        if (!ok) break; 
        else used[a[i]] = true;  
    }
    if (ok) cout<<"YES \n"; 
    else cout<<"NO \n"; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}