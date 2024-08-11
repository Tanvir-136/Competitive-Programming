#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), res(n);
    for (auto &it : a){
        cin >> it;
    }
    set<int> s;
    for (int i = n - 1; i >= 0; i--){
        s.insert(a[i]);
        res[i] = s.size();
    }
    while(m--){
        int l;
        cin >> l;
        cout << res[l - 1] << nl;
    }
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