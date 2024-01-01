// A. Cut Ribbon (https://codeforces.com/contest/189/problem/A)
// Author: Md.Tanvir Islam
// Date:01-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    //use of dynamic programming
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1,INT_MIN);
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        if (i >= a)
            dp[i] = max(dp[i], dp[i - a] + 1);
        if (i >= b)
            dp[i] = max(dp[i], dp[i - b]+ 1);
        if (i >= c)
            dp[i] = max(dp[i], dp[i - c] + 1);
    }
    cout<<dp[n]<<'\n';

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