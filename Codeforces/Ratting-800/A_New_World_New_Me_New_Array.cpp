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
void solve(){
    int n, k, p;
    cin >> n >> k >> p;
    int ans = 0;
    if(k < 0){
        ans = (k - p + 1) / p;
    }else{
        ans = (k + p - 1) / p;
    }
    ans = abs(ans);
    if(ans <= n){
        cout << ans << nl;
    }else{
        cout << -1 << nl;
    }
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