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
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    ll n;
    cin >> n;
    ll l = 1, r = 1e8, range = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll triangular = mid * (mid + 1) / 2; 
        if (triangular >= n) {
            range = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    ll start = (range - 1) * range / 2; 
    cout << n - start << nl;
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
