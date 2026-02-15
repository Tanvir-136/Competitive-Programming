#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
const int mod = 1e9 + 7;
using namespace std;
/*---------------------------------------------------------------*/
ll binexp(ll a, ll b, ll m){
    if (b == 0)
        return 1;
    ll res = binexp(a, b / 2, m);
    if(b & 1){
        return (a * ((res * res) % m)) % m;
    } else {
        return (res * res) % m;
    }
}
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    cout << binexp(a, binexp(b, c, mod - 1), mod) << nl; // Fermat's Little Theorem.
}

int main(){
    FAST_IO;
    //Start Here
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}