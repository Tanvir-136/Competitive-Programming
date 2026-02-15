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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(auto &it : a){
        cin >> it;
    }
    for(auto &it : b){
        cin >> it;
    }
    vector<pair<int, int>> p;
    for(int i = 0; i < n; ++i){
        p.emplace_back(a[i],b[i]);
    }
    ll sum = 0;
    vector<ll> d(n);
    for (int i = 0; i < n; ++i){
        sum += p[i].second;
        d[i] = p[i].first - p[i].second;
    }
    ll P = 0; 
    for(int i = 0; i < n; ++i){
        if (d[i] > 0){
            P += d[i];
        }    
    }
    ll ans = LLONG_MIN;
    for (int i = 0; i < n; ++i){
        ll need;
        if (d[i] > 0){
            need = sum + P + p[i].second;
        }else{
            need = sum + P + p[i].first;
        }
        ans = max(ans, need);
    }
    cout << ans << nl;
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