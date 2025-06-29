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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    ll sum = accumulate(all(a), 0LL);
    if (sum % x != 0) {
        cout << n << nl;
        return;
    }
    int l = -1, r = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] % x != 0) {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] % x != 0) {
            r = i; 
            break;
        }
    }
    if (l == -1 && r == -1) {
        cout << -1 << nl;
    } else {
        cout << max(n - l - 1, r) << nl;
    }
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