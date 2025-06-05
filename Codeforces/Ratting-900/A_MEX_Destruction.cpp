#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
        if(it == 0){
            ++cnt;
        }
    }
    if(cnt == n){
        cout << 0 << nl;
        return;
    }
    int left = -1, right = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] != 0) {
            if (left == -1)
                left = i;
            right = i;
        }
    }
    for (int i = left; i <= right; ++i) {
        if (a[i] == 0) {
            cout << 2 << nl;
            return;
        }
    }
    cout << 1 << nl;
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