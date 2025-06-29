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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    char map[26];
    for (int i = 0; i < 26; ++i) {
        map[i] = 'a' + i;
    }
    for (int i = 0; i < m; ++i) {
        char x, y;
        cin >> x >> y;
        for (int j = 0; j < 26; ++j) {
            if (map[j] == x)
                map[j] = y;
            else if (map[j] == y)
                map[j] = x;
        }
    }
    for (int i = 0; i < n; ++i) {
        s[i] = map[s[i] - 'a'];
    }
    cout << s << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}