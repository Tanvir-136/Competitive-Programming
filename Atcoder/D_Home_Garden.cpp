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
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    ll q;
    cin >> q;
    vector<ll> a;
    ll lazy = 0; 
    while (q--) {
        ll x, y;
        cin >> x;
        if (x == 1) {
            a.push_back(0 - lazy);
        } else if (x == 2) {
            cin >> y;
            lazy += y;
        } else if (x == 3) {
            cin >> y;
            ll cnt = 0;
            vector<ll> new_pots;
            for (ll h : a) {
                if (h + lazy >= y) {
                    ++cnt; 
                } else {
                    new_pots.push_back(h); 
                }
            }
            a = move(new_pots);
            cout << cnt << nl;
        }
    }
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
