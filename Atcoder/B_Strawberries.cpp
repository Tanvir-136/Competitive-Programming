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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'O') {
            ++cnt; 
        } else {
            ans += cnt / k; 
            cnt = 0; 
        }
    }
    ans += cnt / k;
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
