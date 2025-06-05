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
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    string s;
    cin >> s;
    vector<pair<char, int>> l(n);
    for (int i = 0; i < n; ++i) {
        l[i] = {s[i], p[i]};
    }
    vector<int> idx(n);
    iota(all(idx), 0); 
    sort(all(idx), [&](int i, int j) {
        return l[i] < l[j];
    });
    vector<int> q(n);
    for (int rank = 0; rank < n; ++rank) {
        q[idx[rank]] = rank + 1; 
    }
    for (int i = 0; i < n; ++i) {
        cout << q[i] << " ";
    }
    cout << nl;
}
int main(){
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}