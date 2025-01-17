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
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    if (n < 3) {
        cout << 0 << nl;
        return;
    }
    int cnt = 0;
    int mn = *min_element(all(a)); 
    int mx = *max_element(all(a));
    for (int i = 0; i < n; ++i) {
        if (a[i] > mn && a[i] < mx) {
            ++cnt;
        }
    }
    cout << cnt << nl;
}

int main(){
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
