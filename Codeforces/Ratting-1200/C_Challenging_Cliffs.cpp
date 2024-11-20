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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
    }
    sort(all(a));
    
    if (n == 2) {      
        cout << a[0] << ' ' << a[1] << nl;
        return;
    }

    int mn = 1e9, idx = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i + 1] - a[i] < mn) {
            mn = a[i + 1] - a[i];
            idx = i;
        }
    }
    for (int i = idx + 1; i < n; ++i) {
        cout << a[i] << ' ';
    }
    for (int i = 0; i <= idx; ++i) {
        cout << a[i] << ' ';
    }
    cout << nl;
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
