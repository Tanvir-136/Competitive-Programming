// C. Quests
// Author: Md.Tanvir Islam
// Date:09-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
//---------------------------------------------------------------//
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>diff(n+10);
    diff[0] = b[0];
    for(int i=1;i<n;i++){
        diff[i] = max(diff[i-1],b[i]);
    }
    ll total=0,ans=0;
    for(int i=0;i<min(n,k);i++){
        total+=a[i];
        int r = k-(i+1);
        ll p = total + r*diff[i];
        ans = max(ans,p);
    }
    cout << ans << nl;
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