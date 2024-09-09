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
    vector<pair<int, int>> idx(1001, {-1, -1});  
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        idx[num] = {num, i + 1}; 
    }

    int mx = -1;
    for (int i = 1; i <= 1000; i++) {
        if (idx[i].second == -1)
            continue;
        for (int j = 1; j <= 1000; j++) {
            if (idx[j].second == -1)
                continue;
            if (gcd(idx[i].first, idx[j].first) == 1) {
                mx = max(mx, idx[i].second + idx[j].second);  
            }
        }
    }

    cout << mx << nl;
}

int main(){
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
