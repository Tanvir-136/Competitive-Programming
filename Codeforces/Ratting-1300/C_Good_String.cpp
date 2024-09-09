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
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < n - 1; ++i){
        if(i % 2 == 0){
            if (s[i] == s[i + 1]){
                ++cnt;
                s.erase(i + 1, 1);
                --n;
                --i;
            }
        }
   
    }
    if(s.size() % 2 == 0){
        cout << cnt << nl;
        cout << s << nl;
    }else {
        cout << cnt + 1 << nl;
        for(int  i = 0; i < n - 1; ++i){
            cout << s[i];
        }
        cout << nl;
    }
}
int main(){
    FAST_IO;
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}