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
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    ll x, y;
    cin >> x >> y;
    ll a = x, b = y, ans;
    for(int i = 3; i <= 10; ++i){
        ans = a + b;     
        ll tmp = 0;    
        while(ans > 0){
            tmp = tmp * 10 + ans % 10;
            ans /= 10;
        }
        ans = tmp;  
        a = b;
        b = ans;
        // dbg(b);
    }
    cout << b << nl;  
}

int main(){
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}