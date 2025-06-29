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
    char a[n][4];
    for(int i = 0 ; i < n; ++i){
        for(int j = 0; j < 4; ++j){
            cin >> a[i][j];
        }
    }
    vector<int> idx;
    for(int i = 0 ; i < n; ++i){
        for(int j = 0; j < 4; ++j){
            if(a[i][j] == '#'){
                idx.push_back(j + 1);
            }
        }
    }
    reverse(all(idx));
    for(const auto& element : idx){
        cout << element << ' ';
    }
    cout << nl;
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