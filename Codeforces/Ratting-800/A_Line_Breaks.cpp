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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> s[i];
        a[i] = s[i].size();
    }
    int sum = 0, ans = 0;
    for(int i = 0; i < n; ++i){
        sum += a[i];
        if(sum <= m){
            ++ans;
        }
    }
    cout << ans << nl;
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