// D. Very Different Array
// Author: Md.Tanvir Islam
// Date:20-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<ll>sa(n+1),sb(m+1);
    for(int i=0;i<n;i++){
        sa[i+1]=sa[i]+a[i+1];
    }
    for(int i=0;i<m;i++){
        sb[i+1]=sb[i]+b[i];
    }
    ll ans = 0;
    for(int i=0;i<=n;i++){
        ans = max(ans,((sa[n] - sa[i]) - sa[i] - sb[n - i] + (sb[m] - sb[m - i])));
    }
    cout<<ans<<'\n';
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
