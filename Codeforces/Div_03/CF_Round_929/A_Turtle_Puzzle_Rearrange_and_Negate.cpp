// A. Turtle Puzzle: Rearrange and Negate
// Author: Md.Tanvir Islam
// Date:27-02-24
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
    int n;
    cin>>n;
    ll sum =0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        sum+=abs(x);
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