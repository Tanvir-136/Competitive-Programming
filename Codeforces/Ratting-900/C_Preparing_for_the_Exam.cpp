#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nl '\n'
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), q(k);
    set<int> known;
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < k; ++i) {
        cin >> q[i];
        known.insert(q[i]);
    }
    string result = "";
    for (int i = 0; i < m; ++i) {
        int k_cnt = 0;
        if (known.count(a[i]) == 0) {
            k_cnt = k;
        } else {
            k_cnt = k - 1;
        }
        if (k_cnt == n - 1) {
            result += '1';
        } else {
            result += '0';
        }
    }
    cout << result << nl;
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