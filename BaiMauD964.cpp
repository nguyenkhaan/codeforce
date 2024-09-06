#include <bits/stdc++.h>
using namespace std; 
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string s, t;
        cin >> s >> t;
        
        int slen = s.size();
        int tlen = t.size();
        int j = 0;  
        
        bool possible = true;
        for (int i = 0; i < slen; ++i) {
            if (j < tlen && s[i] == t[j]) {
                ++j;
            } else if (s[i] == '?') {
                if (j < tlen) {
                    s[i] = t[j];
                    ++j;
                } else {
                    s[i] = 'a'; 
                }
            }
        }
        
        if (j < tlen) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }

}