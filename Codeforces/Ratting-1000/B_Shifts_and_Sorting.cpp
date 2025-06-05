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
void solve() {
    string s;
    cin >> s;
    int zero = 0, cnt0 = 0, cnt1 = 0;
    ll ans = 0;
    for (char c : s) {
        if (c == '0') {
            zero++;
        }
    }
    for (char c : s) {
        if (c == '0'){
            cnt0++;
            if (cnt1 > 0)
                ans++;
        } else {
            cnt1++;
            ans += zero - cnt0;
        }
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