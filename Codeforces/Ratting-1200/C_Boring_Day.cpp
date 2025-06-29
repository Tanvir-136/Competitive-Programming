#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    queue<int> q;
    ll cnt = 0;
    ll cur = 0;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        q.push(x);
        cur += x;

        while (cur > r && !q.empty()) {
            cur -= q.front();
            q.pop();
        }
        if (cur >= l && cur <= r) {
            cnt++;
            while (!q.empty()){
                q.pop();
            }
            cur = 0;
        }
    }
    cout << cnt << nl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
    }
    return 0;
}