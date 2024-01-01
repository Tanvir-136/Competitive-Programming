// A. Optimal Currency Exchange(https://codeforces.com/contest/1214/problem/A)
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
    int n,d,e;
    cin>>n>>d>>e;
    e*=5;
    int ans=n;
    for(int i=0;i<=e&&i*d<=n;++i){
        ans=min(ans,(n-i*d)%e);
    }
    cout<<ans<<'\n';
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