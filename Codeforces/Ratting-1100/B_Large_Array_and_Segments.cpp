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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    ll sum = accumulate(all(a),0);
    if(sum * k < x){
        cout << 0 << nl;
        return;
    }
    ll l = 1, r = n * k;
    while (l <= r) {
        ll m = l + (r - l) / 2;
        ll cnt_a = (n * k - m + 1) / n;
        ll more = (n * k - m + 1) % n;
        ll sum = cnt_a * accumulate(all(a), 0ll);
        for (int i = n - more; i < n; i++){
            sum += a[i];
        }
        if (sum < x){
            r = m - 1;
        }else{
            l = m + 1;
        }
    }
    cout << r << nl;
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