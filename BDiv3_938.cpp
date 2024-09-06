#include <bits/stdc++.h>
using namespace std; 
#define all(a) (a).begin(),(a).end()
using ll = long long;  
using l = long; 
using vl = vector<long>;
using vi = vector<int>; 
void solve() 
{
    int n; 
    ll c,d; 
    cin>>n>>c>>d; 
    vl a(n*n); 
    for (int i = 0; i<n*n; ++i) {
        cin>>a[i]; 
    }
    sort(all(a)); 
    vl b(n*n);  //dung using de khai bao kieu du lieu ngan hon 
    b[0] = a[0]; 
    for (int i = 1; i <= (n-1); ++i) {
        b[i] = b[i-1] + c; 
    }
    for (int i = 1; i<= n-1; ++i) {
        for (int j = 0; j<n; ++j) {
            b[i*n + j] = b[(i-1)*n + j] + d; 
        }
    }
    sort(all(b));  //su dung define 
    cout<<((a == b)?"YES" : "NO")<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--)  solve(); 
}