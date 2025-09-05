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
    vector<ll> a(n);
    for(auto &it : a){
        cin >> it;
    }
    cout << k % (k + 1) << nl;
    ll g = 0;
    for(int i = 0; i < n; ++i){
        g = __gcd(g, a[i]);
    }
    if(g > 1){
        for(auto &it : a){
            cout << it << ' ';
        }
    }else{
        for(int i = 0; i < n; ++i){
            ll x = a[i] % (k + 1);
            a[i] += (x * k);
        }
        for(auto &it : a){
            cout << it << ' ';
        }
    }
    cout << nl;
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