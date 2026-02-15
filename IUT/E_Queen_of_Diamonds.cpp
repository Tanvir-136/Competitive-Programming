#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    string s;
    cin >> n >> s;
    map<char, bool> mp;
    for (char c : s){
        mp[c] = true;
    }
    int dis = mp.size();
    ll a = 2, b = n - dis, res = 1;
    while(b){
        if(b & 1){
            res = (res * a) % MOD;
        } 
        a = (a * a) % MOD;
        b >>= 1;
    }
    cout << res << nl;
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