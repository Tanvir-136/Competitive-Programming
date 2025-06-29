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
    string s, ans, tmp;
    cin >> s;
    if(n & 1){
        for(int i = 0; i < n; i += 2){
            ans += s[i];
        }
        for(int i = 1; i < n; i += 2){
            tmp += s[i];
        }
        reverse(all(tmp));
        ans = tmp + ans;
        cout << ans << nl;
    }else{
        for(int i = 1; i < n; i += 2){
            ans += s[i];
        }
        for(int i = 0; i < n; i += 2){
            tmp += s[i];
        }
        reverse(all(tmp));
        ans = tmp + ans;
        cout << ans << nl;
    }  
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}