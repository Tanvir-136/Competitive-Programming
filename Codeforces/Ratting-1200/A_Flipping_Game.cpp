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
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a) {
        cin >> it;
    }
    int one = count(all(a), 1);
    if (one == n) {
        cout << n - 1 << nl;
        return;
    }
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        b[i] = (a[i] == 0) ? 1 : -1;
    }
    int mx = 1e-9, cur = 0;
    // Use Kadane's Algorithm to find  maximum gain of 1s we can get by flipping a subarray.
    for (int i = 0; i < n; ++i) {
        cur = max(b[i], cur + b[i]);
        mx = max(mx, cur);
    }
    cout << one + mx << nl;
}
int main() {
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}