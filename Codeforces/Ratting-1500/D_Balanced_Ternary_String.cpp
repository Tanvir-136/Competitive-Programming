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
  
void solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt(3), target(3, n / 3);
    for (char c : s) {
        ++cnt[c - '0'];
    }

    int rep = 0;
    for (int i = 0; i < 3; ++i) {
        rep += abs(cnt[i] - target[i]);
    }
    rep /= 2;
    int done = 0;
    for (int i = 0; i < n; ++i) {
        --cnt[s[i] - '0'];
        for (int j = 0; j < 3; ++j) {
            if (target[j] == 0)
                continue;
            int change = (j != s[i] - '0');
            --target[j];
            int new_rep = 0;
            for (int k = 0; k < 3; ++k) {
                new_rep += abs(cnt[k] - target[k]);
            }
            new_rep /= 2;
            if (done + change + new_rep == rep) {
                s[i] = j + '0';
                done += change;
                break;
            }
            ++target[j];
        }
    }
    cout << s << nl;
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