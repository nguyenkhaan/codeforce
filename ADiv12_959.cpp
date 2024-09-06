#include <bits/stdc++.h>
using namespace std; 
#define range 500 
int n,m,total,a[range][range]; 
void setValue(){
    for (int i = 0; i<=n+2; i++) 
        for (int j =0; j<=m+2; j++) a[i][j] = 0; //Phai coi chung Rubbish Value 
}
void input(){
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=m; j++) cin>>a[i][j]; 
    }
}
void changePosition() {
    auto swap = [](int x, int y, int u, int v) 
    {
        int temp = a[x][y]; 
        a[x][y] = a[u][v]; 
        a[u][v] = temp; 
    };
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            if (total % a[i][j]==0 && a[i][j]*2 == total) {
                if (a[i+1][j]!=0) swap(i,j,i+1,j); 
                else if (a[i-1][j]!=0) swap(i,j,i-1,j); 
                else if (a[i][j+1]!=0) swap(i,j,i,j+1);
                else swap(i,j,i,j-1); 
                return; 
            }
        }
    }
}
void solve(){
    cin>>n>>m; 
    setValue(); 
    input(); 
    if (m*n == 1) {cout<<"-1 \n"; return; }
    total = m*n+1; 
    if (total % 2 == 0) changePosition(); 
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++) cout<<total - a[i][j]<<" "; 
        cout<<"\n"; 
    }
}
int main() 
{
    int T; 
    cin>>T; 
    while (T--) solve(); 
}