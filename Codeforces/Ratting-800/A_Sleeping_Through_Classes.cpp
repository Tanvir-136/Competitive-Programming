#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // int cnt0 = count(all(s),'0');
    int ans = 0, zero = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == '1'){
            zero = k;
        }else{
            if(zero > 0){
                --zero;
            }else{
                ans++;
            }
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