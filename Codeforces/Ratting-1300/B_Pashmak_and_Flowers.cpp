// https://codeforces.com/contest/459/problem/B
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for(auto &it : a){
        cin >> it;
        ++mp[it];
    }
    ll mx = *max_element(all(a));
    ll mn = *min_element(all(a));
    cout << mx - mn << " ";
    if(mp.size() == 1){
        cout << (n * (n - 1))/ 2 << nl;
        return;
    }
    ll mx_cnt = 0, mn_cnt = 0;
    for(auto &it : mp){
        if(mn == it.first){
            mn_cnt = it.second;
        }
        if(mx == it.first){
            mx_cnt = it.second;
        }
    }
    cout << mx_cnt * mn_cnt << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}