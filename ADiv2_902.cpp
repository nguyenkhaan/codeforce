//Phải chú ý tới những điều đặc biệt của bài toán, không lan mang vô lối suy nghĩ thông thường 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int T; cin>>T; 
    while (T--) 
    {
    int n; 
    cin>>n; 
    int a[1000],sum = 0;
    for (int i = 0; i<n-1; ++i) 
    {
        cin>>a[i]; 
        sum += a[i]; 
    } 
    cout<<-sum<<endl; 
    }
}
