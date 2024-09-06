/* Một số câu hỏi kinh điển 
-> Hãy nghĩ tới thao tác giải quyết bài toán, mà thao tác đó khác với thao tác 
đề bài đưa ra 
1. Operation (thao tác): Ta không được thực hiện thao tác đó tay mà hãy thử bẻ 
suy nghĩ xem có cách nào xử lí nhanh thao tác đó không 
2. Max / min: Nếu liên quan tới việc sắp xếp dãy số, làm sao để tối đa hóa giá trị 
(thường cái này nó k cụ thể lắm)*/




#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,m; 
    cin>>n>>m; 
    vector<int> a(m); 
    for (auto &i : a) cin>>i; 
    sort(a.begin(),a.end()); 
    int ans = 100000; 
    for (int L = 0, R = n+L-1; R<m; ++R, ++L) {
        ans = min(ans,a[R] - a[L]); 
    }
    cout<<ans<<endl; 
}
int main()
{
    solve(); 
}