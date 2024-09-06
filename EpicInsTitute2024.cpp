//Removal Game  
//https://codeforces.com/contest/2002/problem/B
/* MỘT CHÚT LÍ THUYẾT VỀ GAME 
1. Game: có hữu hạn lượt chơi và sẽ luôn có người thắng 
2. Play Optimaly: hai người chơi sẽ luôn tìm cách để người kia thua. Họ sẽ 
luôn đi các nước chết người, trừ khi không còn khả năng để đi thi mới đi 1 nước mới 
3. Có 2 TH có thể xảy ra trong game: 
3.1: A thắng, B thua hoặc A thua B thắng: TH hòa hảo, có thể dẫn tới 2 kq con trên 
3.2: A thắng 100%, B thắng 100%: TH tuyệt đối, dẫn tới 2 kq con trên 
-> Play optimally: Luôn đưa ra các nước đi để dẫn tới 3.2 
-> cout YES if (B) will win => ta phải tìm ra TH mà người đó thắng 100% 
-> Cung tương tự tìm người thắng, ta chỉ cần tìm 1 người khó thắng hoặc khó thua
-> Tìm TH mà người đó thắng 100% thì in tên người đó ra, ngược lại in người kia */
#include <bits/stdc++.h>
using namespace std; 
#define BOB cout<<"Bob \n" 
#define ALICE cout<<"Alice \n" 
void solve() 
{
    long n; 
    bool ok = true; 
    cin>>n; 
    vector<long> a(n); 
    vector<long> b(n); 
    for (long i = 0; i<n; ++i) cin>>a[i]; 
    for (long i = 0; i<n; ++i) cin>>b[i]; 
    for (long i = 0; i<n; ++i) if (a[i] != b[i]) {ok = false; break; } 
    if (ok) {BOB; return; }
    ok = true; 
    reverse(b.begin(),b.end()); 
    for (long i = 0; i<n; ++i) if (a[i] != b[i]) {ok = false; break;} 
    if (ok) {BOB; return; }
    ALICE;
}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}