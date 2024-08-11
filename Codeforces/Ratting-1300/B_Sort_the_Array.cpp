#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a) {
        cin >> it;
    }
    int l = 0;
    while (l < n - 1 && a[l] < a[l + 1]) {
        l++;
    }
    if (l == n - 1) {
        cout << "yes" << nl;
        cout << 1 << ' '<< 1 << nl;
        return;
    }
    int r = n - 1;
    while (r > 0 && a[r] > a[r - 1]) {
        r--;
    }
    reverse(a.begin() + l, a.begin() + r + 1);
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout << "yes" << nl;
        cout << l + 1 <<' ' << r + 1 << nl;
    } else {
        cout << "no" << nl;
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