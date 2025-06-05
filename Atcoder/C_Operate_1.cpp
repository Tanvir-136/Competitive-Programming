#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define yes cout << "Yes" << '\n';
#define no cout << "No" << '\n';
using namespace std;

void solve() {
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;
    
    if (s == t) {
        yes; 
        return;
    }
    int a = s.size(), b = t.size();
    if (abs(a - b) > 1) {
        no;
        return;
    }
    if (a == b) {
        int diff_Cnt = 0;
        for (int i = 0; i < a; ++i) {
            if (s[i] != t[i]) {
                diff_Cnt++;
            }
        }
        if (diff_Cnt == 1) {
            yes;  
        } else {
            no;
        }
        return;
    }

    if (abs(a - b) == 1) {
        string longer = (a > b) ? s : t;
        string shorter = (a > b) ? t : s;
        int i = 0, j = 0;
        bool found_diff = false;
        while (i < shorter.size() && j < longer.size()) {
            if (shorter[i] != longer[j]) {
                if (found_diff) {
                    no;  
                    return;
                }
                found_diff = true;
                j++; 
            } else {
                i++;
                j++;
            }
        }
        yes;
        return;
    }
    no; 
}

int main() {
    FAST_IO;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
