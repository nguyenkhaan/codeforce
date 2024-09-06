#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long n,d(1),ans1(0),ans2(0),ans(0); 
    cin>>n; 
    map<long,long> mpa; 
    mpa.clear(); 
    vector<long> a(n+2); 
    for (long i = 0; i<n; ++i) {
        cin>>a[i]; 
        mpa[a[i]] = 1; 
    }
    a.push_back(0); 
    //
    vector<long> b(n+2); 
    map<long,long> mpb; 
    mpb.clear(); 
    for (long i = 0; i<n; ++i) {
        cin>>b[i]; 
        mpb[b[i]] = 1; 
    }
    b.push_back(0);  
    for (long i = 1; i<=n; ++i) {
        if (a[i] != a[i-1]) 
        {
            mpa[a[i-1]] = max(mpa[a[i-1]],d);
            ans1 = max(ans1,mpa[a[i-1]]); //So luong ki tu xuat hien nhieu nhat trong doan a
            d = 0; 
        }  
        ++d; 
    }
    d = 1; 
    for (long i = 1; i<=n; ++i) {
        if (b[i] != b[i-1]) {
            mpb[b[i-1]] = max(mpb[b[i-1]],d);
            if (mpa.count(b[i-1])) ans2 = max(ans2,mpa[b[i-1]]+mpb[b[i-1]]); 
            else ans2 = max(ans2,mpb[b[i-1]]); 
            d = 0; 
        }
        ++d; 
    }
    ans = max(ans1,ans2); 
    cout<<ans<<endl; 
    
}
int main() {
    int T; cin>>T; 
    while (T--) solve(); 
}