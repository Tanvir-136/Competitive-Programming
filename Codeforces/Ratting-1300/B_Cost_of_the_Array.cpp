#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define nl '\n'
/*---------------------------------------------------------------*/
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    if(n == k){
        for(int i = 1; i < n; i += 2){
            if(a[i] != (i / 2 + 1)){
                cout << i / 2 + 1 << nl;
                return;
            }
        }
        cout << n / 2 + 1 << nl;
    }else{
        int l = 1, r = n - k + 1;
        for(int i = 1; i <= r; ++i){
            if(a[i] != 1){
                cout << 1 << nl;
                return;
            }
        }
        cout << 2 << nl;
    }
    
}
int main(){
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}