// A. Generous Kefa(https://codeforces.com/contest/841/problem/A)
// Author: Md.Tanvir Islam
// Date:31-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    bool flag = true;
    for(auto it : mp) {
        if (it.second>k) {
            flag = false;
            break;
        }
    }
    if (flag){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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