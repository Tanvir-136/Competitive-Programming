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
    ll ans = 0, pw3 = 1, i = 0;
    while (n > 0){
        ll d = n % 3;
        n /= 3;
        ll cnt;
        if(i == 0){
            cnt = pw3 * 3;
        }else{
            cnt = (pw3 * 3) + (i * (pw3 / 3));
        }
        ans += d * cnt;
        pw3 *= 3;
        ++i;
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