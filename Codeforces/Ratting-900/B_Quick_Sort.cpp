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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    if(is_sorted(all(a))){
        cout << 0 << nl;
        return;
    } else {
        int idx = 1;
        for(int i = 0; i < n; ++i){
            //dbg(idx)
            if(a[i] == idx){
                ++idx;   
            }
        }
        int ans = (n - idx + k) / k;
        cout << ans << nl;
    }
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
