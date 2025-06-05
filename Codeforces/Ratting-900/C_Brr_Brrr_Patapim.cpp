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
    vector<vector<int>> a(n, vector<int>(n));
    set<int> st;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            st.insert(a[i][j]);
        }
    }
    int p1 = -1;
    for (int i = 1; i <= 2 * n; ++i) {
        if (st.find(i) == st.end()) {
            p1 = i;
            break;
        }
    }
    vector<int> p(2 * n);
    p[0] = p1;
    set<int> st2;
    st2.insert(p1);
    int idx = 1;
    for (int k = 2; k <= 2 * n; ++k) {
        for (int i = 1; i <= n; ++i) {
            int j = k - i;
            if (j >= 1 && j <= n) {
                int val = a[i - 1][j - 1];
                if (st2.find(val) == st2.end()) {
                    p[idx++] = val;
                    st2.insert(val);
                    break;
                }
            }
        }
    }
    for (int it : p){
        cout << it << ' ';
    }
        
    cout << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}


