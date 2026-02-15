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
    ll hc, dc, hm, dm, k, w, a;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    if(k == 0) {
        ll x = (hc + dm - 1) / dm;
        ll y = (hm + dc - 1) / dc;
        if(x >= y){
            yes
        }else{
            no
        }
    }else{
        for(int i = 1; i <= k; ++i){
            ll x = (hc + (i * a) + dm - 1) / dm;
            ll y = (hm + (dc + w * (k - i) - 1)) / (dc + w * (k - i));
            if(x >= y){
                yes
                return;
            }
        }
        for(int i = 1; i <= k; ++i){
            ll x = (hm + (dc + (w * i) - 1)) / (dc + (w * i));
            ll y = (hc + (k - i) * a + dm - 1) / dm;
            if(x <= y){
                yes
                return;
            }
        }
        no
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