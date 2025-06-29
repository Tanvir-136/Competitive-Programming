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
    vector<string> s(n);
    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        m = max(m, (int)s[i].length());
    }
    vector<string> tmp(m, string(n, '*')); 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < s[i].size(); ++j) {
            tmp[j][n - i - 1] = s[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        while (!tmp[i].empty() && tmp[i].back() == '*') {
            tmp[i].pop_back();
        }
    }
    for (auto &it : tmp) {
        cout << it << nl;
    }
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