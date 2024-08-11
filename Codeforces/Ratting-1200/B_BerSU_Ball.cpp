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
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(auto &it : b){
        cin >> it;
    }
    sort(all(a));
    sort(all(b));
    int pairs = 0;
    for (size_t i = 0; i < n; i++){
        for (size_t j = 0; j < m; j++){
            if(abs(a[i] - b[j]) <= 1){
                pairs++;
                b[j] = 100500;
                break;
            }
        }
    }
    cout << pairs << nl;
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