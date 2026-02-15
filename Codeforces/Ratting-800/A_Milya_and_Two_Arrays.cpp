#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define nl '\n'
/*---------------------------------------------------------------*/
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(auto &it : a){
        cin >> it;
    }
    for(auto &it : b){
        cin >> it;
    }
    set<ll> sta,  stb;
    for(int i = 0; i < n; ++i){
        sta.insert(a[i]);
        stb.insert(b[i]);
    }
    if(stb.size() + sta.size() <= 3){
        no
    }else{
        yes
    }
}
int main(){
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}