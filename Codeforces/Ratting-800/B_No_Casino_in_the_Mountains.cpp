#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a){
        cin >> it;
    }
    int cnt = 0, hike = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == 0){
            ++cnt;
        }else{
            cnt = 0;
        }
        if(cnt == k){
            ++hike;
            i += 1;
            cnt = 0;
        }
    }
    cout << hike << nl;
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