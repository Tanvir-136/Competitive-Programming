// C. Sasha and the Casino
// Author: Md.Tanvir Islam
// Date:16-02-24
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
    int k, x, a;
    cin >> k >> x >> a;
    ll sum = 0;
    for(int i=0;i<=x;i++){
        int y = sum / (k - 1) + 1;
        sum += y;
        if(sum>a){
            no;
            return;
        }
    }
    yes;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}