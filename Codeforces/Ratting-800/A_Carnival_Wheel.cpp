#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0);
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

void solve()
{
    ll l, a, b;
    cin >> l >> a >> b;
    ll ans = 0;
    // ans = max(ans, (a + b) % l);
    // ans = max(ans, (a + 2 * b) % l);
    // ans = max(ans, (a + 3 * b) % l);
    // ans = max(ans, (a + 4 * b) % l);
    for(int i = 1; i <= l; ++i){
        ans = max(ans, (a + i * b) % l);
    }
    cout << ans << nl;
}

int main()
{
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}