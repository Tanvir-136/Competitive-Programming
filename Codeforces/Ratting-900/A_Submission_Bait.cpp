#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e9 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(auto &it : a){
        cin >> it;
        ++mp[it];
    }
    vector<int> idx;
    for(auto &it : mp){
        idx.push_back(it.second);
    }
    sort(all(idx), greater<int>());
    if(idx[0] % 2 == 1){
        yes;
        return;
    }
    for(int i = 0; i < idx.size(); ++i){
        if(idx[i] % 2 == 1){
            yes;
            return;
        }
    }
    no;   
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