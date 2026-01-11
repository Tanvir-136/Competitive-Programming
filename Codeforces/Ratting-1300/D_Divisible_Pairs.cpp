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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto &it : a){
        cin >> it;
    }
    ll ans = 0;
    map<pair<int, int>, int> mp;
    for(int i = 0; i < n; ++i){
        int rx = a[i] % x;
        int ry = a[i] % y;
        int need_rx = (x - rx) % x;
        ans += mp[{need_rx, ry}];
        mp[{rx, ry}]++;
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