// B. Asterisk-Minor Template
// Author: Md.Tanvir Islam
// Date:13-02-24
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
    string a,b;
    cin>>a>>b;
    if(a[0]==b[0]){
        yes;
        cout<<a[0]<<'*'<<nl;
        return;
    }
    if(a.back()==b.back()){
        yes;
        cout<<'*'<<a.back()<<nl;
        return;
    }
    for(int i=0;i<a.size()-1;i++){
        for(int j=0;j<b.size()-1;j++){
            if(a[i]==b[j] && a[i+1]==b[j+1]){
                yes;
                cout<<'*'<<a[i]<<a[i+1]<<'*'<<nl;
                return;
            }
        }
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