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
    for (auto &it : a) {
        cin >> it;
    }
    map<int, int> freq;
    vector<pair<int, int>> seg; 
    int start = 0;
    for (int i = 0; i < n; ++i) {
        if (freq.count(a[i])) {
            seg.push_back({start + 1, i + 1}); 
            start = i + 1; 
            freq.clear();
        } else {
            freq[a[i]] = i; 
        }
    }
    if (!seg.empty() && seg.back().second < n) {
        seg.back().second = n; 
    }
    if (seg.empty()) {
        cout << -1 << nl;
    } else {
        cout << seg.size() << nl; 
        for (auto &it : seg) {
            cout << it.first << ' ' << it.second << nl;
        }
    }
}

int main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
