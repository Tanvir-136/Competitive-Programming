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
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a));

    ll ans = 0, sum = 0;
    int j = 0;
    for (int i = 0; i < n; ++i){
        sum += a[i];
        while ((j <= i && (a[i] - a[j]) > 1) || sum > m){
            sum -= a[j];
            ++j;
        }
        ans = max(ans, sum);
    }

    cout << ans << nl;
}

int main(){
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
