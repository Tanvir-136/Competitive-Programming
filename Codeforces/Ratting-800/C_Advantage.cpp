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
    vector<int> a(n),tmp(n);
    for(auto &it : a){
        cin >> it;
    }
    tmp = a;
    sort(all(tmp));
    int mx1 = tmp[n - 1];
    int mx2 = tmp[n - 2];
    for(int i = 0; i < n; ++i){
        if(a[i] != mx1){
            cout << a[i] - mx1 << ' ';
        }else{
            cout << a[i] - mx2 << ' ';
        }
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