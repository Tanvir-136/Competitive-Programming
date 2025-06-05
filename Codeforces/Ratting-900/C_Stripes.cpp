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
    vector<string> s(8);
    for(auto &it : s){
        cin >> it;
    }
    for(int i = 0; i < 8; ++i){
        int R = count(all(s[i]),'R');
        if(R == 8){
            cout << 'R' << nl;
            return;
        }
    }
    cout << 'B' << nl;
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
