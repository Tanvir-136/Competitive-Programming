// A. Rounding
// Author: Md.Tanvir Islam
// Date:18-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin>>n;
    int a = n/10 * 10;
    int b = a+10;
    if((n-a)>(b-n)){
        cout<<b<<'\n';
    }
    else{
        cout<<a<<'\n';
    }
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