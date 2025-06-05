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
    vector<ll> a;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            a.push_back(i); 
            if (i != n / i) {
                a.push_back(n / i);
            }
        }
    }
    sort(all(a));
    if (a.size() < k) {
        cout << -1 << nl;
    } else {
        cout << a[k - 1] << nl;
    }
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
