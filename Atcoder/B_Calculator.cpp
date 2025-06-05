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
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0, non_zero = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        if(s[i] != '0') {
            non_zero++;
            if (cnt > 0) {
                ans += (cnt / 2 + cnt % 2);
                cnt = 0;
            }
        } else {
            cnt++;
        }
    }
    if (cnt > 0) {
        ans += (cnt / 2 + cnt % 2);
    }
    ans += non_zero;
    cout << ans << nl;
}

int main() {
    FAST_IO;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}