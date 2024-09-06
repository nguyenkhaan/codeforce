#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int c1(0),c2(0),c3(0); 
    int n; 
    cin>>n; 
    vector<long> a(n);  
    for (int i = 0; i<n; ++i) {
        cin>>a[i]; 
        if (a[i] == 1) ++c1; 
        if (a[i] == 2) ++c2; 
        if (a[i] == 3) ++c3; 
    }
    int w = min({c1,c2,c3}); 
    if (w)
    {
        cout<<w<<endl; 
        vector<int> p1; 
        vector<int> p2; 
        vector<int> p3; 
        for (int i = 0; i<n; ++i) {
            if (a[i] == 1) p1.push_back(i); 
            if (a[i] == 2) p2.push_back(i); 
            if (a[i] == 3) p3.push_back(i); 
        }
        int p = 0; 
        for (int i = 0; i<w; ++i) {
            cout<<p1[p]+1<<" "<<p2[p]+1<<" "<<p3[p] + 1<<endl; 
            ++p; 
        }
    } else cout<<"0"<<endl; 
}
int main() 
{
    solve(); 
}