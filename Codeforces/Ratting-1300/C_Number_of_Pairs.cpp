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
    int n, l , r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a));
    ll ans = 0;
    for (int i = 0; i < n; ++i){
        ll low = l - a[i];
        ll high = r - a[i];
        int left = lower_bound(a.begin() + i + 1, a.end(), low) - a.begin();
        int right = upper_bound(a.begin() + i + 1, a.end(), high) - a.begin();
        ans += (right - left);
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