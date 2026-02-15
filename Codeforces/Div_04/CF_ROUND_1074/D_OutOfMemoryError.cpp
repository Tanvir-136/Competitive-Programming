#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);
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
    ll n, m, h;
    cin >> n >> m >> h;
    vector<ll> a(n), tmp(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        tmp[i] = a[i];
    }
    vector<int> cng;
    for(int i = 0; i < m; ++i){
        ll idx, val;
        cin >> idx >> val;
        --idx;
        if(tmp[idx] + val <= h){
            tmp[idx] += val;
            cng.push_back(idx);
        } else {
            for(int idx : cng) {
                tmp[idx] = a[idx];
            }
            cng.clear();
        }
    }
    for (int i = 0; i < n; i++){
        cout << tmp[i] << " ";
    }
    cout << nl;
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