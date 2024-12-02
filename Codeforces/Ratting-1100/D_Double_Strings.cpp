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
    vector<string> s(n);
    set<string> st;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        st.insert(s[i]);
    }
    string ans;
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 1; j < s[i].size(); ++j) {
            string pre = s[i].substr(0, j);
            string suf = s[i].substr(j);
            if (st.count(pre) && st.count(suf)) {
                found = true;
                break;
            }
        }
        ans += found ? '1' : '0';
    }
    cout << ans << nl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
