#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << nl;
        return;
    }
    if(n <= 4){
        cout << 2 << nl;
        return;
    }
    ll ans = 2, l = 1, sum = 4;
    for(int i = 1; i <= n; ){
        ll r = sum * 2 + 2; 
        dbg(r)
        i = r;               
        l = sum + 1;
        sum = r;            
        ++ans;
        if (sum >= n){
            break;
        }
           
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}