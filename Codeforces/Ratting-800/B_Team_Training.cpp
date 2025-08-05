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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a));
    int ans = 0, idx = -1;
    bool ok = false;
    for(int i = 0; i < n; ++i){
        if(a[i] >= x){
            ++ans;
            if(!ok){
                idx = i;
                ok = true;
            }
        }
    }
    //dbg(idx)
    int k = 0;
    if(idx != -1){
        for(int i = idx - 1; i >= 0; --i){
            ++k;
            if(k * a[i] >= x){
                ++ans;
                k = 0;
            }
        }
    }else{
        for(int i = n - 1; i >= 0; --i){
            ++k;
            if(k * a[i] >= x){
                ++ans;
                k = 0;
            }
        }
    }
    cout << ans << nl;
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