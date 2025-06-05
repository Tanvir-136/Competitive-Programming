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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for (int i = 0; i < n && k > 0; ++i) {
        for (int j = i; j < n && k > 0; ++j) {
            if (i == j) {
                if (k >= 1) {
                    a[i][j] = 1;
                    --k;
                }
            } else {
                if (k >= 2) {
                    a[i][j] = a[j][i] = 1;
                    k -= 2;
                }
            }
        }
    }
    if (k > 0) {
        cout << -1 << nl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << nl;
    }
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