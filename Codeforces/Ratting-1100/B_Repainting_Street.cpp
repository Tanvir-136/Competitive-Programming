#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define nl '\n'
using namespace std;
void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a){
        cin >> it;
    } 
    int ans = 1e9;
    for (int color = 1; color <= 100; ++color) { 
        int days = 0;
        for (int i = 0; i < n; ) {
            if (a[i] == color) {
                ++i;
            } else {
                ++days;
                i += k;
            }
        }
        ans = min(ans, days);
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
