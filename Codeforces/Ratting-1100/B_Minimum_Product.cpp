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
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll d = min(max(a - n, x), max(b - n, y));
    ll ans = d * (max(a + b - n, x + y) - d);
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
