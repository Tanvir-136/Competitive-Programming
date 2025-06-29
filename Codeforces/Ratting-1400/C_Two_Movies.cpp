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
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a) {
        cin >> it;
    }
    for (auto &it : b) {
        cin >> it;
    }
    int x = 0, y = 0;
    int positive = 0, negative = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1 && b[i] == 1) {
            positive++;
        } else if (a[i] == -1 && b[i] == -1) {
            negative++;
        } else {
            if (a[i] > b[i]) {
                x += a[i];
            } else if (b[i] > a[i]) {
                y += b[i];
            } else {
                if (x <= y) {
                    x += a[i];
                } else {
                    y += b[i];
                }
            }
        }
    }
    while (positive--) {
        if (x <= y) {
            ++x;
        } else {
            ++y;
        }
    }
    while (negative--) {
        if (x <= y) {
            --y;
        } else {
            --x;
        }
    }
    cout << min(x, y) << nl;
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