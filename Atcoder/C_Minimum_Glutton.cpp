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
    ll n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    sort(all(a),greater<int>());
    sort(all(b),greater<int>());

    ll sum = 0, cnt_1 = 0, cnt_2 = 0;
    for(int i = 0; i < n; ++i){
        sum += a[i];
        ++cnt_1;
        if(sum > x){
            break;
        }
    }
    sum = 0;
    for(int i = 0; i < n; ++i){
        sum += b[i];
        ++cnt_2;
        if(sum > y){
           break;
        }
    }
    cout << min(cnt_1, cnt_2) << nl;
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