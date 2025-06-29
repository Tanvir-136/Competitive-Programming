// C. Prepend and Append
// Author: Md.Tanvir Islam
// Date:14-02-24
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
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if ((s[i] == '0' && s[n - i - 1] == '1') || (s[i] == '1' && s[n - i - 1] == '0')){
            s[i]='.';
            s[n-1-i]='.';
        }
        else{
            break;
        }
    }
    // cout<<s<<nl;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'|| s[i]=='1'){
            cnt++;
        }
    }
    cout<<cnt<<nl;
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