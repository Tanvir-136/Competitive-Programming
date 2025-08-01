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
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, pair<ll, ll>>> a;
    for(int i = 0; i < n; ++i){
        ll l, r, real;
        cin >> l >> r >> real;
        a.push_back({l, {r, real}});
    }
    sort(all(a));
    ll ans = k;
    for(int i = 0; i < n; ++i){
        ll l = a[i].first;
        ll r = a[i].second.first;
        ll real = a[i].second.second;
        if(ans >= l && ans <= r){
            ans = max(ans, real);
        }
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}