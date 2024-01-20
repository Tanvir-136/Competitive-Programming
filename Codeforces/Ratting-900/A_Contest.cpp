// A. Contest (https://codeforces.com/contest/501/problem/A)
// Author: Md.Tanvir Islam
// Date:15-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int misha = max(3*a/10,a-(a/250)*c);
    int vasya = max(3*b/10,b-(b/250)*d);
    if(misha>vasya){
        cout<<"Misha\n";
    }else if(misha<vasya){
        cout<<"Vasya\n";
    }else{
        cout<<"Tie\n";
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