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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll ans = 0;
    for(auto &it : a){
        cin >> it;
        ans += __builtin_popcountll(it);
    }
    sort(all(a));
    for(ll i = 0; i <= 60; ++i){
        ll pw = (1LL << i);
        for(int i = 0; i < n; ++i){
            if(!(a[i] & pw) && k >= pw){
                ++ans;
                k -= pw;
            }
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