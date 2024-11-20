// https://codeforces.com/contest/893/problem/C
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
using namespace std;
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
vector<int> graph[N];
vector<bool> vis(N, false);
int n, m;
vector<int> a;
/*---------------------------------------------------------------*/
ll dfs(int node) {
    vis[node] = true;
    ll min_cost = a[node - 1];
    for (auto child : graph[node]) {
        if (!vis[child]){
            min_cost = min(min_cost, dfs(child));
        }
    }
    return min_cost;
}

void solve() {
    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    ll total_cost = 0;
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            total_cost += dfs(i);
        }
    }
    cout << total_cost << nl;
}
int main() {
    FAST_IO;
    int t = 1;
    // cin>> t;
    while (t--) {
        solve();
    }
    return 0;
}