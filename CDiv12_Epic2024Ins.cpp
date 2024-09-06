/* Cac huong tu duy chinh 
- Cái đó xảy ra thế nào. Làm sao để xảy ra. Cái gì liên quan, cần chú ý 
1. Truy cập worst case, best case, có qui luật, mẹo gì, cái gì không đổi 
2. SỬ dụng toán học 
3. Tìm cách mô phỏng cách thức thực hiện 
4. SUy nghĩ hướng làm đơn giản 
5. */
#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; 
    cin>>n; 
    vector<pair<int,int>> a(n); 
    for (int i = 0; i<n; ++i) cin>>a[i].first>>a[i].second; 
    int x,y,z,t; 
    int d = abs(x - z)*(x - z) + (y - t)*(y - t); //o day chi can don gian ap dung pytago la duoc 
    for (int i = 0; i<n; ++i) 
    {
        int d2 = (a[i].first - z)*(a[i].first - z) + (a[i].second - t)*(a[i].second - t); 
        if (d2 <= d) {
            cout<<"no"<<endl; 
            return ; 
        }
    }
    cout<<"yes"<<endl; 
}
int main() 
{
    solve(); 
}