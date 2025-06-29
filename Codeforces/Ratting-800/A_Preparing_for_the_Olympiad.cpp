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
    vector<int> a(n), b(n);
    for(auto &it : a){
        cin >> it;
    }
    for(auto &it : b){
        cin >> it;
    }
    ll m = 0, s = 0;
    for(int i = 0; i < n - 1; ++i){
        if(a[i] > b[i + 1]){
            m += a[i];
            s += b[i + 1];
        }
    }
    m += a[n - 1];
    cout << abs(m - s) << nl;
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