#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    set<int> st;
    for (int i = 0; i < m; ++i) {
        int idx;
        cin >> idx;
        st.insert(idx - 1);
    }
    string c;
    cin >> c;
    sort(all(c));
    int i = 0;
    for (auto &idx : st) {
        s[idx] = c[i];
        ++i;
    }
    cout << s << nl;
}
int main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}