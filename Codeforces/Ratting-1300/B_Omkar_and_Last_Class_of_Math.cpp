#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
void solve() {
    int n;
    cin >> n;
    int p = 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            p = i;
            break;
        }
    }
    if (p == 0){
        p = n;
    }
    cout << n / p << " " << n - (n / p) << nl;
}
int main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
