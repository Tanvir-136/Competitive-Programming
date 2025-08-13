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
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m), ans;
    for (auto &it : a){
        cin >> it;
    }   
    for (auto &it : b){
        cin >> it;
    }
    int i = 0, j = 0;
    while (i < n || j < m){
        bool moved = false;
        if (i < n && a[i] == 0){
            ans.push_back(0);
            ++k;
            ++i;
            moved = true;
            continue;
        }
        if (j < m && b[j] == 0){
            ans.push_back(0);
            ++k;
            ++j;
            moved = true;
            continue;
        }
        if (i < n && a[i] <= k){
            ans.push_back(a[i]);
            ++i;
            moved = true;
            continue;
        }
        if (j < m && b[j] <= k){
            ans.push_back(b[j]);
            ++j;
            moved = true;
            continue;
        }
        if (!moved){
            cout << -1 << nl;
            return;
        }
    }
    for (int idx = 0; idx < ans.size(); ++idx){
        cout << ans[idx] << ' ';
    }
    cout << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}