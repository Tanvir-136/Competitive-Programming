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
    int n, k;
    cin >> n >> k;
    if(n == 1){
        cout << 1 << nl;
        cout << 1 << nl;
        return;
    }
    if(k == 1 || k == n){
        cout << -1 << nl;
        return;
    }
    if(k % 2 == 1){
        cout << 3 << nl;
        cout << 1 << ' ';
        cout << k - 1 << ' ';
        cout << k + 2 << ' ';
    }else{
        cout << 3 << nl;
        cout << 1 << ' ';
        cout << k << ' ';
        cout << k + 1 << ' ';
    }
    cout << nl;
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