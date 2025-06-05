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
    int a, b;
    cin >> a >> b;
    string s;
    for(int i = a; i <= b; ++i){
        string tmp = to_string(i);
        s += tmp;
    }
    ll ans = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '1') ans += 2;
        else if(s[i] == '0' || s[i] == '6' || s[i] == '9') ans += 6;
        else if(s[i] == '2' || s[i] == '3' || s[i] == '5') ans += 5;
        else if(s[i] == '4') ans += 4;
        else if(s[i] == '7') ans += 3;
        else if(s[i] == '8') ans += 7;
    }
    cout << ans << nl;
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