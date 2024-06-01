#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll cur = 0, sum = 0,mx = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        cur += a[i];
        if (cur < 0){
            cur = 0;
        }
        mx = max(cur, mx);
    }
    for (int i = 0; i < k; i++){
        sum = (sum + mx + MOD) % MOD;
        mx = (2 * mx + MOD) % MOD;
    }
    sum = (sum + MOD) % MOD;
    cout << sum << nl;
}
int main(){
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}