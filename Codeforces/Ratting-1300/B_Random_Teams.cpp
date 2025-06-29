// https://codeforces.com/problemset/problem/478/B
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
    ll x = n / m;
    ll y = n % m;
    ll mn_team = (m - y) * (x * (x - 1) / 2) + (y * (x * (x + 1) / 2));
    ll mx_team = ((n - m) * (n - m + 1)) / 2;
    cout << mn_team << ' ' << mx_team << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}