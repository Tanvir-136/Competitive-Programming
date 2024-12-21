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
    vector<int> m(n);
    ll tasks = 0; 
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
        tasks += m[i];
    }
    int avg = tasks / n; 
    int rem = tasks % n;
    
    sort(all(m));
    ll seconds = 0;
    for (int i = 0; i < n; ++i) {
        if (i < n - rem) {
            seconds += max(0, m[i] - avg);
        } else {
            seconds += max(0, m[i] - (avg + 1));
        }
    }
    cout << seconds << nl;
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