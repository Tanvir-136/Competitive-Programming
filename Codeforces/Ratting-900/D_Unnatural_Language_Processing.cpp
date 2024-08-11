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
    string s;
    cin >> s;
    string ans;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a' || s[i] == 'e')
            cout << s[i];
        else {
            if (i > 0 && i + 1 < n && (s[i + 1] == 'a' || s[i + 1] == 'e')) {
                cout << ".";
            }
            cout << s[i];
        }
    }
    cout << ans << nl;
}
int main() {
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}