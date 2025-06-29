#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007 
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/ 
void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll sum = 0, mx_A = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        mx_A = max(mx_A, a[i]);
    }
    if (sum <= m) {
        cout << "infinite" << nl;
        return;
    }
    ll low = 0, high = mx_A, ans = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        ll total = 0;
        for (int i = 0; i < n; ++i) {
            total += min(mid, a[i]);
            if (total > m)
                break;
        }
        if (total <= m) {
            ans = mid;
            low = mid + 1; 
        }else{
            high = mid - 1; 
        }
    }
    cout << ans << nl;
}
int main() {
    FAST_IO;
    //Start here
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}