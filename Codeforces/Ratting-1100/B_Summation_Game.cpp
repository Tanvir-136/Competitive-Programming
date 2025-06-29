// B. Summation Game
// Author: Md.Tanvir Islam
// Date:29-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> sum(n + 1);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] + v[i];
    }
    int ans = INT_MIN;
    for (int i = 0; i <= k; i++) {
        int res = -sum[n - i] + 2 * sum[max(0, n - i - x)];
        ans = max(ans, res);
    }
    cout << ans << "\n";
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