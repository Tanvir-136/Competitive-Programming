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
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int l = 0, ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        while (sum > t) {
            sum -= a[l];
            ++l;
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}