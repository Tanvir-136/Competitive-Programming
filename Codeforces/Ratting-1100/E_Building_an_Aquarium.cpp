#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n'
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
    }
    ll l = 0, h = *max_element(all(a)) + x;
    ll ans = 0;
    while (l <= h) {
        ll mid = (l + h) / 2;
        ll total = 0;
        for (int i = 0; i < n; ++i) {
            total += max(mid - a[i], 0LL);
        }
        if (total <= x) {
            ans = mid;
            l = mid + 1;  
        } else {
            h = mid - 1; 
        }
    }
    cout << ans << nl; 
}

int main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}