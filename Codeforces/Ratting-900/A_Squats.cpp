// A. Squats (https://codeforces.com/problemset/problem/424/A)
// Author: Md.Tanvir Islam
// Date:24-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_X = count(s.begin(), s.end(), 'X');
    int cnt_x = n - cnt_X;
    
    int change = abs(cnt_X - cnt_x) / 2;
    cout << change << '\n';

    for (int i = 0; i < n && change > 0; i++) {
        if ((cnt_X > cnt_x && s[i] == 'X') || (cnt_x > cnt_X && s[i] == 'x')) {
            s[i] = (s[i] == 'X') ? 'x' : 'X';
            change--;
        }
    }
    cout << s << '\n';
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}