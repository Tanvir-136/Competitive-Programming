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
    vector<int> a(n);
    map<int, int> mp;
    for(auto &it : a){
        cin >> it;
        mp[it]++;
    }

    if(mp.size() == 1){ 
        cout << -1 << nl;
    }else{
        int key = a[0];
        int cnt = 0, mn = 1e9;
        for(int i = 0; i < n; ++i){
            if(a[i] == key){
                cnt++;
            }else{
                mn = min(mn, cnt);
                cnt = 0;
            }
        }
        mn = min(mn, cnt); 
        cout << mn << nl;
    }
}

int main(){
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
