#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
const int mod = 1e9 + 7;
using namespace std;
/*---------------------------------------------------------------*/
ll binexp(ll a, ll b){
    if(b == 0) return 1;
    ll ans = binexp(a, b / 2);
    if(b % 2 == 1){
        return (a * (ans * ans % mod)) % mod;
    } else {
        return (ans * ans) % mod;
    }
}
ll modinv(ll x){
    return binexp(x, mod - 2);
}
void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a(n);
    for(ll i = 0; i < n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    ll nod = 1, nod_m1 = 1, nod_2m1 = 1, parity = 1;           
    for(ll i = 0; i < n; ++i){
        ll k1 = a[i].second + 1;
        nod = (nod * (k1 % mod)) % mod;
        nod_m1 = (nod_m1 * (k1 % (mod - 1))) % (mod - 1);
        nod_2m1 = (nod_2m1 * (k1 % (2*(mod-1)))) % (2*(mod-1));
        parity = (parity * (k1 % 2)) % 2;
    }
    ll sod = 1, pod = 1;
    for(ll i = 0; i < n; ++i){
        ll p = a[i].first;
        ll k = a[i].second;

        ll term = (binexp(p, k + 1) - 1 + mod) % mod;
        term = (term * modinv(p - 1)) % mod;
        sod = (sod * term) % mod;
    }
    if (parity == 0){  
        ll halfD = (nod_2m1 / 2) % (mod - 1);
        for(ll i = 0; i < n; ++i){
            ll p = a[i].first;
            ll k = a[i].second % (mod - 1);

            ll exp = (k * halfD) % (mod - 1);
            pod = (pod * binexp(p, exp)) % mod;
        }
    }
    else{ 
        for(ll i = 0; i < n; ++i){
            ll p = a[i].first;
            ll k2 = (a[i].second / 2) % (mod - 1);

            ll exp = (k2 * nod_m1) % (mod - 1);
            pod = (pod * binexp(p, exp)) % mod;
        }
    }
    cout << nod << ' ' << sod << ' ' << pod << nl;
}

int main(){
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}