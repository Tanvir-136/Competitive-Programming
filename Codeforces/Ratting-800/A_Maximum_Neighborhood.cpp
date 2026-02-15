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
    vector<vector<int>>a(n, vector<int>(n));
    int k = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = k;
            ++k;
        }
    }
    ll mx = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            ll ans = a[i][j];
            if (i > 0)
                ans += a[i - 1][j];
            if (i < n - 1)
                ans += a[i + 1][j];
            if (j > 0)
                ans += a[i][j - 1];
            if (j < n - 1)
                ans += a[i][j + 1];
            mx = max(ans, mx);
        }
    }
    cout << mx << nl;
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