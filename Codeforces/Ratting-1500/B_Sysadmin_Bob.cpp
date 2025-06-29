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
    string s, tmp;
    cin >> s;
    if (s[0] == '@') {
        cout << "No solution";
        return;
    }
    bool flag = false;
    for (char c : s) {
        if (c == '@') {
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "No solution";
        return;
    }
    tmp.clear();
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '@') {
            tmp += s[i];
            if (i + 1 >= s.size() || s[i + 1] == '@' || (i + 2 < s.size() && s[i + 2] == '@')) {
                cout << "No solution";
                return;
            }
            tmp += s[i + 1];
            bool more = false;
            for (int j = i + 1; j < s.size() && !more; ++j) {
                if (s[j] == '@')
                    more = true;
            }
            if (more)
                tmp += ',';
            ++i;
        } else {
            tmp += s[i];
        }
    }

    cout << tmp << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}