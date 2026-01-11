#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);
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
    int m, s;
    cin >> m >> s;
    if (s == 0 && m == 1) {
        cout << "0 0" << endl;
        return;
    }
    if(s < 1 || s > m * 9){
        cout << -1 << ' ' << -1 << nl;
        return;
    }
    string small(m, '0'), big(m, '0');
    int sum = s - 1;
    small[0] = '1';
    for(int i = m - 1; i >= 0 && sum > 0; --i){
        int add = min(9 - (small[i] - '0'), sum);
        small[i] += add;
        sum -= add;
    }
    if(sum > 0){
        cout << -1 << ' ' << -1 << nl;
        return;
    }
    sum = s;
    for(int i = 0; i < m && sum > 0; ++i){
        int add = min(9, sum);
        big[i] += add;
        sum -= add;
    }
    cout << small << ' ' << big << nl;
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