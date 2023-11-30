// A. Line Trip
// Author: Md.Tanvir Islam
// Date:30-11-23
//---------------------------------------------------------------//
#include<iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    int previous=0;
    for(int i=0;i<n;i++){
        ans=max(ans,v[i]-previous);
        previous=v[i];
    }
    ans = max(ans,2*(k-previous));
    cout<<ans<<'\n';
}
int main(){
    FAST_IO;
    //Start Here
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}