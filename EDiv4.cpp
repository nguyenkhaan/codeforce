#include <bits/stdc++.h>
#include <chrono>
using namespace std; 
#define range 2e5
//hando_taiya
vector<long long> threeSquare(13); 
long remStep[200001],ps[200001]; 
long long step(long long n, int &bac_thang) 
{
    while ((n / threeSquare[bac_thang]) !=0) bac_thang++; 
    return bac_thang; 
}
void makeDefault() 
{
    threeSquare[0] = 1;
    for (int i = 1; i<=12; i++) threeSquare[i] = 3 * threeSquare[i-1];  
    int bac_thang = 1; 
    long long l(1),r(range);
    remStep[0] = 0; 
    remStep[1] = 1; 
    ps[1] = 1; 
    for (long long i = 2; i<=r; i++) 
    {
        long long result = step(i,bac_thang); 
        remStep[i] = remStep[i-1] + result; 
        ps[i] = result; 
    } 
}
signed main() 
{
    int q; 
    cin>>q; 
    for (long long i = 1; i<=range; i++) remStep[i] = 0; 
    makeDefault(); 
    while (q--) 
    {
        long long l,r; 
        cin>>l>>r; 
        cout<<remStep[r] - remStep[l-1] + ps[l] <<endl; 
    }
}
