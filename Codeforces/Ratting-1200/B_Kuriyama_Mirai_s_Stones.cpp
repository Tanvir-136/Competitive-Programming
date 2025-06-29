#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
    }
    int m;
    cin >> m;
    vector<ll> a_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        a_sum[i + 1] = a_sum[i] + a[i];
    }
    vector<int> b = a;
    sort(all(b));
    vector<ll> b_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        b_sum[i + 1] = b_sum[i] + b[i];
    }
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << a_sum[r] - a_sum[l - 1] << nl;
        } else {
            cout << b_sum[r] - b_sum[l - 1] << nl;
        }
    }
}
int main() {
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}