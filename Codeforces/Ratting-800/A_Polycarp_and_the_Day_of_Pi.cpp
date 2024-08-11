#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
    
const int N = 1e5 + 10;
vector<int> dp(N, -1);

void solve(){
    string s;
    cin >> s;
    string temp = "314159265358979323846264338327";
    int cnt = 0;
    for(int i = 0; i < 30; ++i){
        if(temp[i] != s[i]){
            break;
        }
        ++cnt;
    }
    cout << cnt << nl;
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