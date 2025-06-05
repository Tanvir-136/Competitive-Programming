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
    int n = s.size(), mx = 1;
    for (int i = 0; i < n; i++) {
        for (int l = i, r = i; l >= 0 && r < n && s[l] == s[r]; l--, r++)
            mx = max(mx, r - l + 1);

        for (int l = i, r = i + 1; l >= 0 && r < n && s[l] == s[r]; l--, r++)
            mx = max(mx, r - l + 1);
    }
    cout << mx << nl;
}
int main(){
    FAST_IO;
    // Start Here
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}