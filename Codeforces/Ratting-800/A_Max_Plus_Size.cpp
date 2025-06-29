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
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    int mx_1 = -1, mx_2 = -1, cnt_o = 0, cnt_e = 0;
    for(int i = 0; i < n; i++){
        if (i % 2 == 0) {
            mx_2 = max(mx_2, a[i]);
            cnt_e++;
        } else {
            mx_1 = max(mx_1, a[i]);
            cnt_o++;
        }
    }
    int ans1 = mx_1 + cnt_o;
    int ans2 = mx_2 + cnt_e;

    int ans = max(ans1, ans2);
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