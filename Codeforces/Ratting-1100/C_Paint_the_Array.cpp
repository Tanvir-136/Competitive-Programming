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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &it : a){
        cin >> it;
    }
    ll g = 0, flag1 = 1, flag2 = 1;
    for(ll i = 0; i < n; i += 2){
        g = __gcd(g, a[i]);
    }
    for(ll i = 1; i < n; i += 2){
        if(a[i] % g == 0){
            flag1 = 0;
            break;
        }
    }
    if(flag1){
        cout << g << nl;
    }else{
        g = 0;
        for (ll i = 1; i < n; i += 2){
            g = __gcd(g, a[i]);
        }
        for (int i = 0; i < n; i += 2){
            if (a[i] % g == 0){
                flag2 = 0;
                break;
            }
        }
        if(flag2){
            cout << g << nl;
        }else{
            cout << 0 << nl;
        }
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