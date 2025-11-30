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
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &it : a){
        cin >> it;
    }
    sort(all(a), greater<int>()); 
    ll k = min(n, m);
    ll ans = 0;
    for (ll i = 0; i < k; ++i){
        ans += a[i] * (m - i);
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