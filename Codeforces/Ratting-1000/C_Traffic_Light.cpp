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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;
    int last = -1; 
    int ans = 0;    
    for (int i = 2 * n - 1; i >= 0; --i) {
        if (s[i] == 'g') {
            last = i; 
        }
        if (s[i] == c && last != -1) {
            ans = max(ans, last - i); 
        }
    }
    cout << ans << nl;
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