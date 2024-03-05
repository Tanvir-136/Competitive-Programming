#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << max(0LL, max(b, c) + 1 - a) << ' ' << max(0LL, max(a, c) + 1 - b) << ' ' << max(0LL, max(b, a) + 1 - c) << nl;
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