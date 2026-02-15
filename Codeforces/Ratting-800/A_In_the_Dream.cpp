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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = c - a; 
    ll y = d - b;
    
    bool f = (max(a,b) <= 2 * min(a,b) + 2);
    bool s = (max(x,y) <= 2 * min(x,y) + 2);

    if (f && s){
        yes
    }else{
        no
    }
}
int main(){
    FAST_IO;
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
