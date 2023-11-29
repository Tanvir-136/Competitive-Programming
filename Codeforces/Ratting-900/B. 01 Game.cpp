// B. 01 Game (https://codeforces.com/problemset/problem/1373/B)
// Author: Md.Tanvir Islam
// Date:29-11-23
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//

void solve()
{
    string str;
    cin>>str;
    int cnt_zero=0,cnt_one=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0'){
            cnt_zero++;
        }
        else{
            cnt_one++;
        }
    }
    if(min(cnt_zero,cnt_one)%2!=0){
        cout<<"DA\n";
    }else{
        cout<<"NET\n";
    }
}
int main(){
    FAST_IO;
    //Start Here
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}