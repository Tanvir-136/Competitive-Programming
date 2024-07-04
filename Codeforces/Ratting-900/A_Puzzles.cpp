#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n , m;
    cin >> n >> m;
    vector<int> a(m);
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a));
    int mn = 1e9;
    for (int i = 0; i <= m - n; ++i) {
        int d = a[i + n - 1] - a[i];
        mn = min(mn, d);
    }
    cout << mn << nl;

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