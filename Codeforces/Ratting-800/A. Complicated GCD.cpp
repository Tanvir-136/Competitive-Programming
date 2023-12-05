// A. Complicated GCD(https://codeforces.com/contest/664/problem/A)
// Author:Tanvir Islam
// Date: 03-12-23

//------------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long 
using namespace std;
//------------------------------------------------------------------//
void solve(){
    string a, b;
    cin >> a >> b;
    if (a == b) cout << a;
    else cout << 1;
}
int main(){
    FAST;
    //Start Here
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
