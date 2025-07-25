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
void solve() {
    int n;
    cin >> n;
    vector<ll> p(n), s(n);
    for (ll &it : p){
        cin >> it;
    } 
    for (ll &it : s){
        cin >> it;
    } 
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = lcm(p[i], s[i]);
    }
    vector<ll> pr(n), su(n);
    pr[0] = a[0];
    for (int i = 1; i < n; ++i) {
        pr[i] = __gcd(pr[i - 1], a[i]);
    }
    su[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        su[i] = __gcd(a[i], su[i + 1]);
    }
    if (pr == p && su == s){
        yes;
    }else {
        no;
    }             
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