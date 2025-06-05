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
    string s, temp;
    cin >> n >> s;
    temp = s;
    sort(all(temp));
    if(temp == s){
        no;
        return;
    }
    int l = -1, r = -1;
    for(int i = 0; i < n - 1; ++i){
        if(s[i] > s[i + 1]){
            l = i;
            r = i + 1;
            break;
        }
    }
    yes;
    cout << l + 1 << ' ' << r + 1 << nl;
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