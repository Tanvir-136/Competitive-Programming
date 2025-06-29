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
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(auto &it : a) {
        cin >> it;
        mp[it]++;
    }
    int cnt_one = 0;
    for (auto it : mp){
        if(it.second == 1)
            cnt_one ++;
    }
    int sz = mp.size();
    int alice_get = (cnt_one + 1) / 2;
    int ans = alice_get * 2 + (sz - cnt_one);
    cout << ans << nl;
}
int main() {
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}