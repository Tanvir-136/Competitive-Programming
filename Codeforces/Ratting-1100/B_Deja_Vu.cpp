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
    ll n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &it : a){
        cin >> it;
    }
    ll mx = 31;
    for (ll i = 0; i < q; i++){
        ll x;
        cin >> x;
        if (mx > x){
            mx = x;
            ll pw = (1LL << x), add = (1LL << (x - 1LL));
            for (ll i = 0; i < n; ++i){
                if (a[i] % pw == 0){
                    a[i] += add;
                }
            }
        }
    }
    for (auto &it : a){
        cout << it << ' ';
    }
    cout << nl;
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