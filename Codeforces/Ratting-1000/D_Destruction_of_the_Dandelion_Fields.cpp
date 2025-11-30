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
    vector<ll> a(n),x;
    ll even = 0, odd = 0, ans = 0;
    for(auto &it : a){
        cin >> it;
        if(it % 2 == 0){
            ++even;
            ans += it;
        }else{
            ++odd;
            x.push_back(it);
        }
    }
    if(odd == 0){
        cout << 0 << nl;
    }else{
        sort(all(x), greater<ll>());
        n = x.size();
        for(int i = 0; i < (n + 1) / 2; ++i){
            ans += x[i];
        }
        cout << ans << nl;
    }
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