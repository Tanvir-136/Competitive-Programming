// C. Training Before the Olympiad
// Author: Md.Tanvir Islam
// Date:04-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    ll odd = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        odd += v[i] % 2;
        ll res = 0;
        if (odd == 1 && i == 0) {
            res = 0;
        } else {
            res = odd / 3;
            if (odd % 3 == 1) {
                res += 1;
            }
        }
        cout << sum - res << " \n"[i == n - 1];
    }
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