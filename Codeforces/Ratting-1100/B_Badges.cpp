// B. Badges (https://codeforces.com/contest/1214/problem/B)
// Author: Md.Tanvir Islam
// Date:04-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int b,g,n;
    cin>>b>>g>>n;
    cout<<min(g,n)-(n-min(b,n))+1<<'\n';
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
