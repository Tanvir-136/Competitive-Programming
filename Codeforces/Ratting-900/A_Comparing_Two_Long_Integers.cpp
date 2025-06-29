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
    string a, b;
    cin >> a >> b;
    
    size_t pos_a = a.find_first_not_of('0');
    size_t pos_b = b.find_first_not_of('0');

    a = (pos_a == string::npos) ? "0" : a.substr(pos_a);
    b = (pos_b == string::npos) ? "0" : b.substr(pos_b);

    if (a.size() > b.size()) {
        cout << ">" << '\n';
    } else if (a.size() < b.size()) {
        cout << "<" << '\n';
    } else {
        if (a > b) {
            cout << ">" << '\n';
        } else if (a < b) {
            cout << "<" << '\n';
        } else {
            cout << "=" << '\n';
        }
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