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
void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    int ans = INT_MAX; 
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = 0; 
            for (int k = 0; k < m; ++k) {
                diff += abs(s[i][k] - s[j][k]); 
            }
            ans = min(ans, diff);
        }
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}