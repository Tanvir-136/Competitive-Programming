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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a), greater<ll>());
    vector<ll> pre(n);
    pre[0] = a[0];
    for(int i = 1; i < n; ++i){
        pre[i] = a[i] + pre[i - 1];
    }
    while(q--){
        int qi;
        cin >> qi;
        if(qi > pre[n - 1]){
            cout << -1 << nl;
        }else{
            int lb = lower_bound(all(pre), qi) - pre.begin();
            cout << lb + 1 << nl;
        }
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