// A. Consecutive Sum
// Author: Md.Tanvir Islam
// Date:07-02-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define nl "\n"
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum= 0;
    for(int i=0; i<k; i++){
        int x = 0;
        for(int j=i; j<n; j+=k){
          x = max(x, a[j]);
        }
        sum+=x;
      }
    cout<<sum<<nl;
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
