#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &it : p) {
        cin >> it;
    }
    string s;
    cin >> s;
    ll total_B = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            total_B += p[i];
        }
    }
    ll ans = total_B;
    ll prefix_A = 0, prefix_B = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') {
            prefix_A += p[i];
        } else {
            prefix_B += p[i];
        }
        ans = max(ans, total_B + prefix_A - prefix_B);
    }
    prefix_A = 0, prefix_B = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == 'A') {
            prefix_A += p[i];
        } else {
            prefix_B += p[i];
        }
        ans = max(ans, total_B + prefix_A - prefix_B);
    }
    cout << ans << nl;
}

int main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}