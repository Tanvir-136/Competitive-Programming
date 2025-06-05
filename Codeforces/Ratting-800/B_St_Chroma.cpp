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
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < x; ++i){
        cout << i << ' ';
    }
    for (int i = x + 1; i < n; ++i){
        cout << i << ' ';
    }
    if (x < n){
        cout << x;
    }
    cout << nl;
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
