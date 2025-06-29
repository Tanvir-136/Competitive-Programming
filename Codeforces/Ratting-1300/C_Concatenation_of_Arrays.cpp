// https://codeforces.com/contest/2024/problem/C
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
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        p.emplace_back(x, y);
    }
    sort(all(p), [](const pair<int, int> &a, pair<int, int> &b){ 
        return (a.first + a.second) < (b.first + b.second); 
    });
    for(int i = 0; i < n; ++i){
        cout << p[i].first << ' ' <<  p[i].second << ' ';    
    }

    cout << nl;
}

int main(){
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
