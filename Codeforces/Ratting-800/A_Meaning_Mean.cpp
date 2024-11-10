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
    sort(all(a));
    int ans = 0;
    while(a.size() > 1){
        sort(all(a));
        a[0] = a[0] + a[1];
        a[0] /= 2;
        a.erase(a.begin() + 1);
    }
    cout << a[0] << nl;
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

