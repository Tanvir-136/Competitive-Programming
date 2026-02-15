#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define nl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = '0' + s; 
    int changes = 0;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] != s[i-1]){
            ++changes;
        }
    }
    int ans;
    if (changes >= 3){
        ans = n + changes - 2;
    }else if (changes == 2){
        ans = n + changes - 1;
    } else {
        ans = n + changes;
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}