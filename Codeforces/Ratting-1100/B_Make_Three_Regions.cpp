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
const int N = 2e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/

void solve() {
    int n;
    cin >> n;
    vector<string> s(2);
    for (auto &x : s)
        cin >> x;
    int ans = 0;
    for (int i = 1; i < n - 1; ++i) {
        bool ok = true;
        ok &= (s[0][i] == '.' && s[1][i] == '.');
        ok &= (s[0][i - 1] != s[1][i - 1]);
        ok &= (s[0][i + 1] != s[1][i + 1]);
        ok &= (s[0][i - 1] == s[0][i + 1]);
        ans += ok;
    }
    cout << ans << nl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
