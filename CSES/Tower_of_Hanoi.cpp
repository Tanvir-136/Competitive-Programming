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
void tower(int n, int beg, int middle, int end) {
    if (n == 0)
        return;                     
    tower(n - 1, beg, end, middle); 
    cout << beg << ' ' << end << nl; 
    tower(n - 1, middle, beg, end);  
}
void solve() {
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << nl;
    tower(n, 1, 2, 3);
}
int main() {
    FAST_IO;
    // Start Here
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}