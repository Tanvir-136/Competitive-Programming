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
    int r, c;
    char ch;
    cin >> r >> c >> ch;
    char a[r][c];
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }
    set<char> st;
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            if (a[i][j] == ch) { 
                if (i > 0 && a[i-1][j] != ch && a[i-1][j] != '.') {
                    st.insert(a[i-1][j]);
                }
                if (i < r - 1 && a[i+1][j] != ch && a[i+1][j] != '.') {
                    st.insert(a[i+1][j]);
                }
                if (j > 0 && a[i][j-1] != ch && a[i][j-1] != '.') {
                    st.insert(a[i][j-1]);
                }
                if (j < c - 1 && a[i][j+1] != ch && a[i][j+1] != '.') {
                    st.insert(a[i][j+1]);
                }
            }
        }
    }
    cout << st.size() << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    //cin >> t;
        solve();
    }
    return 0;
}