// B. Ania and Minimizing (https://codeforces.com/contest/1230/problem/B)
// Author: Md.Tanvir Islam
// Date:01-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin>>s;
    if (k == 0) {
        cout << s << '\n';
        return;
    }
    if (n == 1) {
        cout << '0' << '\n';
        return;
    }
    if (s[0] != '1') {
        s[0] = '1';
        k--;
    }
    for (int i = 1; i < n && k > 0; ++i) {
        if (s[i] != '0') {
            s[i] = '0';
            k--;
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