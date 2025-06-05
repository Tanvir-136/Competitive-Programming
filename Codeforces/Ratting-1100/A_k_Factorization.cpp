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
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> factor;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factor.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        factor.push_back(n);

    if (factor.size() < k) {
        cout << -1 << nl;
        return;
    }
    while (factor.size() > k) {
        int a = factor.back();
        factor.pop_back();
        int b = factor.back();
        factor.pop_back();
        factor.push_back(a * b);
    }

    for (int x : factor)
        cout << x << " ";
    cout << nl;
}

int main(){
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
