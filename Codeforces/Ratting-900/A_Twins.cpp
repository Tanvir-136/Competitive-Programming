#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
    }
    sort(all(a), greater<int>());
    int total = accumulate(all(a), 0);
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        cnt++;
        if (sum > (total - sum)) {
            break;
        }
    }
    cout << cnt << nl;
}
int main() {
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}