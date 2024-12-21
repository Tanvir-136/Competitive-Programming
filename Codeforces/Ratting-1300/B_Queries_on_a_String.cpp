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
    string s;
    cin >> s;
    int q;
    cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        --l, --r; 
        string temp = s.substr(l, r - l + 1); 
        int sz = temp.size();
        k = k % sz; 
        string rotated = temp.substr(sz - k) + temp.substr(0, sz - k);
        s = s.substr(0, l) + rotated + s.substr(r + 1);
    }
    cout << s << nl;
}

int main() {
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
