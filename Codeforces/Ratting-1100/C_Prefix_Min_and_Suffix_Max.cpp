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
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> p_mn(n), s_mx(n);
    p_mn[0] = a[0];
    for (int i = 1; i < n; ++i){
        p_mn[i] = min(p_mn[i - 1], a[i]);
    }
    s_mx[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i){
        s_mx[i] = max(s_mx[i + 1], a[i]);
    }
    string ans(n, '0');
    for (int i = 0; i < n; i++){
        if (a[i] == p_mn[i] || a[i] == s_mx[i])
            ans[i] = '1';
    }
    cout << ans << nl;
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