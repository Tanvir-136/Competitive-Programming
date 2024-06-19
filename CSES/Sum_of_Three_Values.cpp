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
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(all(a));
    for (int i = 0; i < n - 2; i++) {
        int target = x - a[i].first;
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = a[left].first + a[right].first;
            if (sum == target) {
                cout << a[i].second << ' ' << a[left].second << ' ' << a[right].second << nl;
                return;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    cout << "IMPOSSIBLE" << nl;
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