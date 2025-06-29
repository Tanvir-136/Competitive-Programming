#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < 4 * n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> pairs;
    for (auto &it : mp) {
        if (it.second % 2 != 0) {
            no;
            return;
        }
        for (int i = 0; i < it.second / 2; i++) {
            pairs.push_back(it.first);
        }
    }
    if (pairs.size() != 2 * n) {
        no;
        return;
    }
    sort(all(pairs));
    ll target_area = (ll)pairs[0] * pairs[2 * n - 1];
    for (int i = 0; i < n; ++i) {
        ll area = (ll)pairs[i] * pairs[2 * n - 1 - i];
        if (area != target_area) {
            no;
            return;
        }
    }
    yes;
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