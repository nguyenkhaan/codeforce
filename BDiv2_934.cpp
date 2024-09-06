#include <bits/stdc++.h>
//Note: hai so a ^ a = 0 
using namespace std; 
void solve() 
{
    int n,k; 
    cin>>n>>k; 
    vector<int> a(2*n); 
    map<int,int> m1; 
    map<int,int> m2; 
    int d = 0 , D = 0;   
    for (int i = 0; i<2*n; ++i) {
        cin>>a[i]; 
        if (i < n) {
            m1[a[i]]++; 
            if (m1[a[i]] == 2) ++d; 
            if (i == n-1) {
                D = d; 
                d = 0; 
            }
        }
        else {
            m2[a[i]]++; 
            if (m2[a[i]] == 2) ++d; 
            if (i == 2*n - 1) D = min(D,d); 
        }
    }
    int dou1 = min(k,D),dou2 = dou1; 
    int sin1 = 0; 
    vector<int> n1; 
    vector<int> n2; 
    if (k - D > 0) sin1 = 2*(k - D); 
    for (int i = 0; i<n; ++i) 
    {
        if (m1[a[i]] == 2 && dou1 > 0) {
            m1[a[i]]++; //tang len 3 
            n1.push_back(a[i]); 
            --dou1; 
        }
        else if (m1[a[i]] == 1 && sin1 > 0) {
            m1[a[i]] = -1; //thuc hien gan lai de danh dau la lay phan tu nay 
            n1.push_back(a[i]); 
            --sin1; 
        }
        else if (m1[a[i]] == 3) n1.push_back(a[i]); 
        
        if (n1.size() == 2*k) break; 
    }
    for (int i = n; i<2*n; ++i) 
    {
        if (m2[a[i]] == 2 && dou2 > 0) 
        {
            n2.push_back(a[i]); 
            m2[a[i]]++; 
            --dou2; 
        }
        else if (m2[a[i]] == 1 && m1[a[i]] == -1) n2.push_back(a[i]); 
        else if (m2[a[i]] == 3) n2.push_back(a[i]); 
        if (n2.size() == 2*k) break; 
    }
    for (auto x : n1) cout<<x<<" ";   cout<<endl; 
    for (auto x : n2) cout<<x<<" ";   cout<<endl; 
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) solve(); 
}