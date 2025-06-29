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
    for(auto &it : a){
        cin >> it;
    }
    ll ans = 0;
    for(int i = 1; i < n - 1; ++i){
        if(a[i - 1] > a[i]){
            ans += (a[i - 1] - a[i]);
            a[i] += (a[i - 1] - a[i]);
        } 
    }
    if(a[n - 2] > a[n - 1]){
        ans += a[n - 2] - a[n - 1];
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    // Start Here
    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}