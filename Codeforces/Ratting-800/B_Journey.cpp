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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll sum = a + b + c;
    ll cycle = n / sum;
    ll walked = cycle * sum;
    ll day = 3 * cycle;

    if (walked >= n){
        cout << day << nl;
    }else if (walked + a >= n){
        cout << day + 1 << nl;
    }else if (walked + a + b >= n){
        cout << day + 2 << nl;
    }else{
        cout << day + 3 << nl;
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