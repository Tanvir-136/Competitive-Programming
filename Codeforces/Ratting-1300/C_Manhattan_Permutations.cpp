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
    ll k;
    cin >> n >> k;
    ll max_k = 0;
    for (int i = 0; i < n; i++)
        max_k += abs(n - 1 - i - i);
    
    if (k % 2 != 0 || k > max_k){
        no;
    }else {
        vector<int> p(n);
        k /= 2;
        iota(p.begin(), p.end(), 1);
        for (int i = 0; 0 < k; i++) {
            if (k >= n - 1 - 2 * i) {
                swap(p[i], p[n - 1 - i]);
                k -= n - 1 - 2 * i;
            } else {
                swap(p[i], p[i + k]);
                k = 0;
            }
        }
        yes;
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << nl;
    }
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