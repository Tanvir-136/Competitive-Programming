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
    cin >> n;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    int l = 0, r = n - 1;
    int alice = 0, bob = 0;
    int cur_left = 0, cur_right = 0;
    while(l <= r){
        if(cur_left <= cur_right){
            cur_left += a[l];
            ++alice;
            ++l;
        } else {
            cur_right += a[r];
            ++bob;
            --r;
        }
    }
    cout << alice << ' ' << bob << nl;
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