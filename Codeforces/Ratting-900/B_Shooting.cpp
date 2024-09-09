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
    vector<pair<int,int>> a;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.push_back(make_pair(x, i + 1));
    }
    sort(all(a));
    reverse(all(a));
    ll ans = 0;
    for(int i = 1; i < n; ++i){
        ans += a[i].first * i + 1;
    }
    ++ans;
    cout << ans << nl;
    for(int i = 0; i < n; ++i){
        cout << a[i].second << ' ';
    }
    cout << nl;
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