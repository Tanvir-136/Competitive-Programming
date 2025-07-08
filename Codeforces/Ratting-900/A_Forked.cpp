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
int dx[] = {1, -1, -1, 1};
int dy[] = {1, 1, -1, -1};
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    ll a , b;
    cin >> a >> b;
    ll x_k, y_k, x_q, y_q;
    cin >> x_k >> y_k >> x_q >> y_q;
    set<pair<ll, ll>> king, queen;
    for(int i = 0; i < 4; ++i){
        king.insert({x_k + dx[i] * a, y_k + dy[i] * b});
        king.insert({x_k + dx[i] * b, y_k + dy[i] * a});

        queen.insert({x_q + dx[i] * a, y_q + dy[i] * b});
        queen.insert({x_q + dx[i] * b, y_q + dy[i] * a});
    }
    ll ans = 0;
    for(auto &it : king){
        if(queen.find(it) != queen.end()){
            ++ans;
        }
    }
    cout << ans << nl;
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