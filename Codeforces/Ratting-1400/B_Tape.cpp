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
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> b;
    for (int i = 0; i < n - 1; i++){
        b.push_back(a[i + 1] - a[i] - 1);
    }
    sort(all(b), greater<int>());
    int ans = a[n - 1] - a[0] + 1;
    for (int i = 0; i < k - 1; i++){
        ans -= b[i];
    }
    cout << ans << nl;
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