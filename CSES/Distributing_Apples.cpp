#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define mod 1000000007
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 2e6 + 10;
using namespace std;
/*---------------------------------------------------------------*/
vector<ll> fact(N);
ll binexp(ll a, ll b){
    if(b == 0){
        return 1;
    }
    ll res = binexp(a, b / 2);
    if(b & 1){
        return (a * ((res * res) % mod)) % mod;
    } else {
        return (res * res) % mod;
    }
}
void precompute(){
    fact[0] = 1;
    for(int i = 1; i < N; ++i){
        fact[i] = (fact[i - 1] * i) % mod;
    }
}
void solve(){
    ll a, b;
    cin >> a >> b;
    a = a + b - 1;
    ll ans = fact[a]; // nCr = n! / (r! * (n-r)!)
    ll denom = (fact[b] * fact[a - b]) % mod;
    ans = (ans * binexp(denom, mod - 2)) % mod;  // Fermat's Little Theorem.
    cout << ans << nl; 
}
int main(){
    FAST_IO;
    //Start Here
    precompute();
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}