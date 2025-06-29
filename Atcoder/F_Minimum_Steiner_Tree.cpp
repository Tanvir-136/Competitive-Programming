// https://atcoder.jp/contests/abc368/tasks/abc368_d?lang=en
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
using namespace std;
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 2e5 + 10;
vector<int> graph[N];
vector<int> vis(N, 0); 
vector<int> cnt(N, 0);
int n, k, ans;
vector<int> v;
/*---------------------------------------------------------------*/
void dfs(int node, int parent = -1) {
    if (vis[node]) {
        cnt[node] = 1;
    }
    for (auto child : graph[node]) {
        if (child == parent)
            continue;
        dfs(child, node);
        cnt[node] += cnt[child];
    }
    if (cnt[node] == 0)
        ans--;
}

void solve() {
    cin >> n >> k;
    for (int i = 0; i < n - 1; ++i) {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

   int root = 1;
    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        ++vis[a];
        root = a;
    }
    ans = n;
    dfs(root);
    cout << ans << nl;
}
int main() {
    FAST_IO;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}