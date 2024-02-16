// B. Matrix Rotation
// Author: Md.Tanvir Islam
// Date:15-02-24
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
    int v[4];
    cin>>v[0]>>v[1]>>v[3]>>v[2];
    for(int i=0;i<4;i++){
        if (v[0] < v[1] && v[1] < v[2] && v[2] > v[3] && v[3] > v[0]){
            yes
            return;
        }
        rotate(v,v+1,v+4);
    }
    no;
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