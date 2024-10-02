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
    int n , m , q;
    cin >> n >> m >> q;
    vector<int> a(m);
    for(auto &it : a){
        cin >> it;
    }
    int pos;
    cin >> pos;
    sort(all(a));
    for(int i = 0; i < q; ++i){
        auto it = lower_bound(all(a), pos);
        int ans;
        if (it == a.begin()){
            ans = a[0] - 1;
        }else if (it == a.end()){
            ans = n - a[m - 1];
        }else{
            ans = (*it - *(it - 1)) / 2;
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