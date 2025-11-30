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
    int n , k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    sort(all(a), [&](pair<int, int> &x, pair<int, int> &y){   
            if(x.first == y.first){
                return x.second < y.second;
            }   
            return x.first > y.first;
        });
    --k;
    int key = -1, p = -1;
    if(k >= 0 && k < n){
        key = a[k].first;
        p = a[k].second;
    }
    int ans = 0;
    for(auto &[f, s] : a){
        if(f == key && p == s){
            ++ans;
        }
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}