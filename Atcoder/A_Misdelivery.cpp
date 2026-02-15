#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"Yes"<<'\n';
#define no cout<<"No"<<'\n';
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
    vector<string> a(n);
    for(auto &it : a){
        cin >> it;
    }
    int x;
    string key;
    cin >> x >> key;
    bool f = false;
    for(int i = 0; i < n; ++i){
        if(key == a[i] && x == (i + 1)){
            f = true;
            break;
        }
    }
    if(f){
        yes
    }else{
        no
    }
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