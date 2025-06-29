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
    vector<ll> a(n);
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a));
    if(n <= 2){
        cout << -1 << nl;
        return; 
    }

    ll sum = accumulate(all(a), 0ll);
    ll target = a[n / 2];
    ll low = 0, high = 5e13; 
    ll ans = 1e18;

    while(low <= high){
        ll mid = (high + low) / 2;
        if((sum + mid) > (2 * n * target)){
            ans = min(ans, mid);
            high = mid - 1;
        }else{
            low = mid + 1;
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