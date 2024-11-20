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
    int q;
    cin >> q;
    map<int, int> mp; 
    int cnt = 0; 
    while (q--) {
        int x, y;
        cin >> x;
        if (x == 1) {
            cin >> y;
            if (mp[y] == 0)
                cnt++;
            mp[y]++;
        }else if (x == 2){
            cin >> y;
            mp[y]--;
            if (mp[y] == 0)
                cnt--;
        }else if (x == 3){
            cout << cnt << nl;
        }
    }
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