// A. Cowardly Rooks
// Author: Md.Tanvir Islam
// Date:05-02-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> rows(n, 0);
    vector<int> cols(n, 0);

    for (int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        rows[x - 1]++;
        cols[y - 1]++;
    }
    bool possible = false;
    for (int i = 0; i < n; ++i){
        if (rows[i] == 0 || cols[i] == 0){
            possible = true;
            break;
        }
    }
    cout << (possible ? "YES" : "NO") << '\n';
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
