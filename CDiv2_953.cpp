#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long n,k; 
    cin>>n>>k; 
    long long maxEnd = (n - 1); 
    long long maxStart = (n % 2 == 0)?1:2; 
    long long maxRes = ((n/2)*maxStart + (n/2)*(n/2 - 1))*2; 
    if (k < 0 || k>maxRes || k%2!=0) {
        cout<<"NO"<<endl; 
        return; 
    }
    cout<<"YES"<<endl; 
    if (k <= (n-1)*2) {
        long long remain = k / 2 + 1; 
        for (long long i = 1; i<=n; ++i) {
            if (i == 1) cout<<(k / 2) + 1<<" "; 
            else if (i == remain) cout<<"1"<<" "; 
            else cout<<i<<" "; 
        }
        cout<<endl; 
    }
    else {
        vector<long long> x = {0}; 
        for (long long i = 1; i<=n; ++i) x.push_back(i); 
        long long beg = 1; 
        long long fin = n; 
        while (k > (fin - beg)*2) 
        {
            k -= (fin - beg)*2; 
            //thuc hien swap 
            long long t = x[fin]; x[fin] = x[beg]; x[beg] = t; 
            beg++; 
            fin--; 
        }
        long long remain = (k / 2) + beg; 
        long long t = x[remain]; x[remain] = x[beg]; x[beg] = t; 
        for (long long i = 1; i<=n; ++i) cout<<x[i]<<" "; 
        cout<<endl;
    }

}
int main() 
{
    long long t; 
    cin>>t; 
    while (t--) solve();  
}