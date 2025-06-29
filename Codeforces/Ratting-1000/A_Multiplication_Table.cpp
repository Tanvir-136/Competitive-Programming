// A. Multiplication Table
// Author: Md.Tanvir Islam
// Date:03-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve() {
    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    for (ll i = 1; i <= n; ++i) {
        if (x % i == 0 && x / i <= n) {
            cnt++;
        }
    }
    cout << cnt << '\n';
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