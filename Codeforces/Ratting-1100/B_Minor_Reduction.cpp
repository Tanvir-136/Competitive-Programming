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
    for(int i = n - 2; i >= 0; --i){
        int sum = s[i] - '0' + s[i + 1] - '0';
        if(sum >= 10){
            string res = s.substr(0, i);
            res += to_string(sum);
            res += s.substr(i + 2);
            cout << res << nl;
            return;
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        int sum = s[i] - '0' + s[i + 1] - '0';
        string res = s.substr(0, i) + to_string(sum) + s.substr(i + 2);
        cout << res << nl;
        return;
    }
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