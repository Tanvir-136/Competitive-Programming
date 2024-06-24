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
    int n;
    cin >> n;
    if (n % 3 == 0) {
        cout << 1 << ' ' << 1 << ' ' << n - 2 << nl;
    } else if (n % 3 == 1) {
        cout << 1 << ' ' << 2 << ' ' << n - 3 << nl;
    } else {
        cout << 1 << ' ' << 2 << ' ' << n - 3 << nl;
    }
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}