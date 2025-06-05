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
    int n , k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i] >> b[i];
    }
    for(int i = 1; i <= k; ++i){
        int mx = INT_MIN; 
        for(int j = 0; j < n; ++j){
            int ans = a[j] * (b[j] + i);
            mx = max(mx, ans);  
        }
        cout << mx << nl;
    }
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
