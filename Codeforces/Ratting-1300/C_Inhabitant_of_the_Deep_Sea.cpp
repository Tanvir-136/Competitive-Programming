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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a){
        cin >> x;
    }
    ll sum = accumulate(all(a),0LL);
    if(sum <= k){
        cout << n <<nl;
        return;
    }
    ll half_op = (k + 1) / 2;
    ll ans = 0;
    for (int i = 0; i < n; i++){
        if(a[i] <= half_op){
            half_op -= a[i];
            a[i] = 0;
            ++ans;
        }else{
            break;
        }
    }
    half_op = k / 2;
    for (int i = n - 1; i >= 0; i--){
        if (a[i] <= half_op){
            half_op -= a[i];
            a[i] = 0;
            ++ans;
        }else{
            break;
        }
    }
    cout << ans <<nl;
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