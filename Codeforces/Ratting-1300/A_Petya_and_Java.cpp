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
void solve() {
    string s;
    cin >> s;

    string byte_mx = "127";
    string short_mx = "32767";
    string int_mx = "2147483647";
    string long_mx = "9223372036854775807";

    if ((s.size() < byte_mx.size()) || (s.size() == byte_mx.size() && s <= byte_mx)) {
        cout << "byte" << nl;
        return;
    }

    if ((s.size() < short_mx.size()) || (s.size() == short_mx.size() && s <= short_mx)) {
        cout << "short" << nl;
        return;
    }

    if ((s.size() < int_mx.size()) || (s.size() == int_mx.size() && s <= int_mx)) {
        cout << "int" << nl;
        return;
    }

    if ((s.size() < long_mx.size()) || (s.size() == long_mx.size() && s <= long_mx)) {
        cout << "long" << nl;
        return;
    }
    cout << "BigInteger" << nl;
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