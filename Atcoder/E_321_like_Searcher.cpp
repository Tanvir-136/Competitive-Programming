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
    int k;
    cin >> k;
    queue<ll> q;
    for (int i = 1; i <= 9; i++) {
        q.push(i);
    }
    vector<ll> a;
    while (!q.empty()) {
        ll num = q.front();
        q.pop();
        a.push_back(num);
        if (a.size() == k)
            break;
        int last = num % 10;
        for (int i = 0; i < last; i++) {
            q.push(num * 10 + i);
        }
    }
    cout << a[k - 1] << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}