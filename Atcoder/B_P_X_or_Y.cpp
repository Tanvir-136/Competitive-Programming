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
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = 1; i <= 6; ++i){
        for(int j = 1; j <= 6; ++j){
            if((i + j) >= x || abs(i - j) >= y){
                ++cnt;
            }
        }
    }
    double ans = (double)cnt / 36.0;
    cout << fixed << setprecision(15) << ans << nl;
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