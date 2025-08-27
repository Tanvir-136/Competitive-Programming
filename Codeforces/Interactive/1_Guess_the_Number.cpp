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
string ask(int mid){
    cout << mid << endl << flush;
    string s;
    cin >> s;
    return s;
}
void solve(){
    int l = 1, r = 1e6;
    int ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        string res = ask(mid);
        if (res == "<") {
            r = mid - 1;
        } else {               
            ans = mid;
            l = mid + 1;       
        }
    }
    cout << "! " << ans << endl << flush;
}
int main(){
    FAST_IO;
    int t = 1;
   // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}