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
    int n, r;
    cin >> n >> r;
    int ans = r;
    for(int i = 0; i < n; ++i){
        int d , x;
        cin >> d >> x;
        if(d == 1 && ans >= 1600 && ans <= 2799){
            ans += x;
        }
        if(d == 2 && ans >= 1200 && ans <= 2399){
            ans += x;
        }
    }
    cout << ans << nl;
}

int main(){
    FAST_IO;
    //Start Here
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}