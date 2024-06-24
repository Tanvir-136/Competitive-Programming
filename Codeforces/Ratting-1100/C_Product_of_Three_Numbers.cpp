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
    for (int i = 2; i * i * i <= n; ++i) {
        if (n % i == 0) {
            for (int j = i + 1; j * j <= n / i; ++j) {
                if ((n / i) % j == 0) {
                    int k = n / (i * j);
                    if (k > j && i * j * k == n) {
                        yes;
                        cout << i << ' ' << j << ' ' << k << nl;
                        return;
                    }
                }
            }
        }
    } 
    no;
}
int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}