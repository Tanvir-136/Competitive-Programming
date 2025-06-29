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
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        int x = s[i] - '0';
        if (x % 4 == 0) {
            ans++;
        }
    }
    for (int i = 1; i < n; ++i) {
        int x = (s[i - 1] - '0') * 10 + (s[i] - '0');
        if (x % 4 == 0) {
            ans += i;
        }
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
