#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve(){
    int n , m , k;
    cin >> n >> m >>k;
    vector<int> a(m + 1);
    for(auto &it : a){
        cin >> it;
    }
    int cnt = 0;
    int Fedor = a[m];
    for(int i = 0; i < m; ++i){
        int Cur = a[i];
        int ans = Fedor ^ Cur;
        int cnt_bit = __builtin_popcount(ans);
        if(cnt_bit <= k){
            ++cnt;
        }
    }
    cout << cnt << nl;
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