// A. XORinacci
// Author: Md.Tanvir Islam
// Date:26-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int a,b,n;
    cin>>a>>b>>n;

    switch (n % 3)
    {
    case 0:
        cout << a << '\n';
        break;
    case 1:
        cout << b << '\n';
        break;
    default:
        cout << (a ^ b) << '\n';
    }
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