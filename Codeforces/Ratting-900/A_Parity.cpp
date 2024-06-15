#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
void solve() {
    int b, k;
    cin >> b >> k;
    vector<int> a(k);
    for (auto &x : a) {
        cin >> x;
    }
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        ans = (ans + a[i] * pow(b, k-i-1)) % 10;
    }
    cout << ((ans == 0) ? "even" : "odd") << nl;
}

int main() {
    FAST_IO;
    // Start Here
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
