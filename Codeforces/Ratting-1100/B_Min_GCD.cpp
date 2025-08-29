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
    map<ll, ll> mp;
    for(auto &it : a){
        cin >> it;
        ++mp[it];
    }
    ll mn = *min_element(all(a));
    if(mp[mn] >= 2){
        yes
        return;
    }
    sort(all(a));
    // req gcd is a[0]
    ll req = a[0];
    vector<ll> p;
    for(ll i = 1; i < n; ++i){
        if(a[i] % req == 0){
            p.push_back(a[i]);
        }
    }
    if(p.empty()){
        no
        return;
    }
    ll g = 0;
    for(auto &x : p){
        g = __gcd(g, x);
    }
    if(g == req){
        yes 
    } else{
        no
    } 
}
int main(){
    FAST_IO;
    //Start here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}