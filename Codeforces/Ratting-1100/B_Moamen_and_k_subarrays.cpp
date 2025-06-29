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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first; 
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    int ans = 1; 
    for (int i = 1; i < n; i++) {
        if (v[i - 1].second + 1 != v[i].second) {
            ans++;
        }
    }
    cout << (ans <= k ? "YES" : "NO") << nl;
}
int main() {
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}