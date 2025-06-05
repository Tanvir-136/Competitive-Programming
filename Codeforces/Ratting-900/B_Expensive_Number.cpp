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
    string s;
    cin >> s;
    int n = s.size();
    if(n == 1){
        cout << 0 << nl;
        return;
    }
    int index = -1;
    for(int i = n - 1; i >= 0; --i){
        if(s[i] != '0'){
            index = i;
            break;
        }
    }
    int zeros = 0;
    for (int i = 0; i < index; ++i) {
        if (s[i] == '0')
            zeros++;
    }
    int kept = 1 + zeros;
    int ans = n - kept;
    cout << ans << nl;
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