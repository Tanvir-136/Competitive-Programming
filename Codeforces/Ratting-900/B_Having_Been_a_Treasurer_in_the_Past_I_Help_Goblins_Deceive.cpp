#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0)
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt_dash = count(all(s), '_');
    ll cnt_hyphen = count(all(s), '-');
    if (n < 3 || cnt_dash == 0 || cnt_hyphen < 2) {
        cout << 0 << nl;
        return;
    }
    ll ans = (cnt_hyphen / 2) * (cnt_hyphen - (cnt_hyphen / 2)) * cnt_dash;
    cout << ans << nl;
}
int main(){
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}