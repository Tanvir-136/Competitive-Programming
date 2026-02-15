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
const int N = 1e9 + 7;
using namespace std;
/*---------------------------------------------------------------*/ 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    int f = 0;
    for(int i = 1; i < n; ++i){
        if(__gcd(a[i - 1], a[i]) > 1){
            f = 1;
            break;
        }
    }
    if(f == 0){
        cout << 0 << nl;
    }else{
        int mn = *min_element(all(a)), id = 0;
        for(int i = 1; i < n; ++i){
            if(a[i] == mn){
                id = i;
            }
        }
        vector<pair<int,int>> idx;
        for(int i = 0; i < n; ++i){
            if (i == id){
                continue;
            }
            int y;
            if ((i & 1) != (id & 1)) {
                y = mn + 1;
            } else {
                y = mn + 2;
            }
            idx.emplace_back(i, y);
        }
        cout << idx.size() << nl;
        for(int i = 0; i < idx.size(); ++i){
            cout << id + 1 << ' ' << idx[i].first + 1 << ' ' << mn << ' ' << idx[i].second << nl;
        }
    }
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