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
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    if(x == 0) {
        cout << abs(a - b) << nl;
    } else {
        int mx = max(a, b);
        int mn = min(a, b);
        int d = (n - mx) + (mn - 1);
        d = min(d, x);
        cout << d + abs(a - b) << nl;
    }
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}