//https://codeforces.com/contest/1296/problem/D
#include <bits/stdc++.h>
using namespace std; 
using l = long; 
#define MAX 100000000000002
long long n,a,b,k; 
vector<pair<long long,long long>> A; 
vector<char> whoWin; 
long calDiff(long long v, long long ind) {
    long long x = v / (a+b);
    long long ans1 = a*x + b*x;
    if (ans1 < v) ans1 = MAX;

    long long ans2 = a*(x + 1) + b*x;
    if (ans2 < v) ans2 = MAX;

    long long ans3 = a*(x + 1) + b*(x + 1);
    if (ans3 < v) ans3 = MAX;

    long long min_ans = min({ans1, ans2, ans3});
    if (min_ans == ans1 || min_ans == ans3) whoWin[ind] = 'B'; 
    else whoWin[ind] = 'A'; 
    return min_ans;
}
void solve()  
{
    cin>>n>>a>>b>>k; 
    A.resize(n+2); 
    long long score = 0; 
    vector<long long> skill;
    whoWin.resize(n+2); 
    for (long long i = 0; i<n; ++i) {
        cin>>A[i].first; 
        A[i].second = calDiff(A[i].first,i); 
        if (whoWin[i] == 'A') ++score; 
        else skill.push_back(A[i].first); 
    }  
    if (a >= b) score += min(k,(long long)skill.size());   
    else 
    {
        for (long long i = 0; i<skill.size(); ++i) {
            skill[i] %= (a+b); 
            if (skill[i] == 0) skill[i] += (a+b); 
            skill[i] = ((skill[i] + a - 1)/a) - 1; 
        }
        sort(skill.begin(),skill.end()); 
        for (long long i = 0; i<skill.size(); ++i) {
            if (k - skill[i] < 0) break; 
            k-= skill[i]; 
            score++; 
        }
    }
    cout<<score<<endl; 
}
int main() 
{
    solve(); 
}