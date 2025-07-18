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
    vector<int> a(7);
    for(auto &it : a){
        cin >> it;
    }
    cout << a[0] << ' ';
    for(int i = 1; i <= 4; ++i){
        for(int j = 2; j <=5; ++j){
            if((a[i] + a[j]) == (a[6] - a[0])){
                cout << a[i] << ' ' << a[j] << nl;
                return;
            }
        }
    }
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