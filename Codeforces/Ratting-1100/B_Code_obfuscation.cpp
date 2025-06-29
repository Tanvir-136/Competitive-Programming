// B. Code obfuscation(https://codeforces.com/contest/765/problem/B)
// Author: Md.Tanvir Islam
// Date:01-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    string s;
    cin>>s;
    char c = 'a';
    for(int i=0;i<s.size();i++){
        if(s[i]>c){
            cout<<"NO\n";
            return;
        }
        if(s[i]==c){
            c++;
        }
    }
    cout<<"YES\n";
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