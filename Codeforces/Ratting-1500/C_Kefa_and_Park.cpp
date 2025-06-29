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
vector<int> graph[N];
vector<int> vis(N, 0);
int n, k;
int ans = 0;
/*---------------------------------------------------------------*/
void dfs(int node, int parent = -1){
    for (auto child : graph[node]){
        if (child == parent)
            continue;
        if (vis[child] && vis[node])
            vis[child] += vis[node];

        if (vis[child] > k)
            continue;
        if (graph[child].size() == 1)
            ++ans;
        dfs(child, node);
    }
}
void solve(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> vis[i];
    }
    //ans = 0;
    for (int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    cout << ans << nl;
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