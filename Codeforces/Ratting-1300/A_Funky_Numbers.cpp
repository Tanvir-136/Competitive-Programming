// A. Funky Numbers (https://codeforces.com/contest/192/problem/A)
// Author: Md.Tanvir Islam
// Date: 27-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    ll n;
    cin >> n;
    bool found = false;
    for (ll i = 1; i * (i + 1) / 2 < n; ++i){
        ll tn = i * (i + 1) / 2; 
        ll rem = n - tn; 
        if (rem > 0){
            ll inv = (sqrt(1 + 8 * rem) - 1) / 2;
            if (inv * (inv + 1) / 2 == rem){
                found = true;
                break;
            }
        }
    }
    if (found){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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