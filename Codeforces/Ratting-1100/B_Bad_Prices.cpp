#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define ll long long
#define nl '\n'
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a) 
        cin >> it;
    int cnt = 0, mn = 1e9;
    for (int i = n - 1; i >= 0; i--){
        if(a[i] > mn){
            ++cnt;   
        }
        mn = min(mn, a[i]);
    }
    cout << cnt << nl;
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