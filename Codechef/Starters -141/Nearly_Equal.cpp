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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int mn = 1e9;
    for (int i = 0; i <= n - m; i++) {
        int cur = 0;
        for (int j = 0; j < m; j++) {
            if (a[i + j] != b[j]) {
                cur++;
            }
        }
        mn = min(mn, cur);
    }
    cout << mn << nl;
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
