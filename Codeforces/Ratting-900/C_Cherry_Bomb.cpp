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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(auto &it : a){
        cin >> it;
    }
    for(auto &it : b){
        cin >> it;
    }
    int target = -1;
    for(int i = 0; i < n; ++i){
        if(b[i] != -1){
            target = a[i] + b[i];
            break;
        }
    }
    if(target == -1){
        int mx = *max_element(all(a));
        int mn = *min_element(all(a));
        int l = mx;
        int h = k + mn;
        if(l > h){
            cout << 0 << nl;
        } else {
            cout << (h - l + 1) << nl;
        }
        return;
    }
    for(int i = 0; i < n; ++i){
        if(b[i] != -1 && a[i] + b[i] != target){
            cout << 0 << nl;
            return;
        }
    }
    for(int i = 0; i < n; ++i){
        if(b[i] == -1){
            int need = target - a[i];
            if(need < 0 || need > k){
                cout << 0 << nl;
                return;
            }
        }
    }
    cout << 1 << nl;
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