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
    map<int, int> mp;
    for(int i = 0; i < 4; ++i){
        int x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    if(mp.size() == 1){
        cout << 2 << nl;
        return;
    }
    for(auto &it : mp){
        if(it.second > 1){
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