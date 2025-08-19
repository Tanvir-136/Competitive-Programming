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
void solve(){
    ll n, m, h;
    cin >> n >> m >> h;
    vector<tuple<ll, ll, ll>> cnt;
    for(int id = 1; id <= n; ++id){
        vector<ll> a(m), pre(m);
        for(auto &it : a){
            cin >> it;
        } 
        sort(all(a));
        pre[0] = a[0];
        for(ll i = 1; i < m; ++i){
            pre[i] = pre[i - 1] + a[i];
        } 
        ll sol = 0, penalty = 0, time = 0;
        for(ll i = 0; i < m; ++i){
            if(time + a[i] > h){
                break;
            } 
            time += a[i];
            penalty += time;
            ++sol;
        }
        cnt.emplace_back(sol, penalty, id);
    }
    stable_sort(cnt.begin(), cnt.end(),
        [](const tuple<ll, ll, ll>& a, const tuple<ll, ll, ll>& b) {
            if (get<0>(a) != get<0>(b)) return get<0>(a) > get<0>(b);
            if (get<1>(a) != get<1>(b)) return get<1>(a) < get<1>(b);
            return false;
        });

    int idx = 1;
    for (auto &[solved, penalty, id] : cnt) {
        if (id == 1) {
            cout << idx << nl;
            break;
        }
        ++idx;
    }
}
int main(){
    FAST_IO;
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}