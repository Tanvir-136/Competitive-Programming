// C. Best Binary String(https://codeforces.com/contest/1837/problem/C)
// Author: Md.Tanvir Islam
// Date:30-12-23
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve() {
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '?') {
            if (i > 0 && s[i - 1] == '1') {
                s[i] = '1'; 
            } else {
                s[i] = '0'; 
            }
        }
    }
    cout << s << endl;
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
} 