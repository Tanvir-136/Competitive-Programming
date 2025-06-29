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
    double s;
    cin >> n >> s;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    if (a[0] >= s + 0.5) {
        no;
        return;
    }
    bool found = false;
    for(int i = 0; i < n - 1; ++i){
        if(a[i + 1] - a[i] >= (s + 0.5)){
            found = true;
            break;
        }
    }
    if(found){
        no;
    }else{
        yes;
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