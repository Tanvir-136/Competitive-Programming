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
    vector<int> a(4);
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a));
    if (a[0] + a[1] > a[2] || a[0] + a[1] > a[3] || a[1] + a[2] > a[3]){
        cout << "TRIANGLE" << nl;
    }else {
        if (a[0] + a[1] == a[2]){
            cout << "SEGMENT" << nl;
        }else if(a[1] + a[2] == a[3]){
            cout << "SEGMENT" << nl;
        }else {
            cout << "IMPOSSIBLE" << nl;
        }
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