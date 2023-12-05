// A. Keyboard(https://codeforces.com/contest/474/problem/A)
// Author: Md.Tanvir Islam
// Date:06-12-23

//---------------------------------------------------------------//
#include<iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//

void solve()
{
    char ch;
    cin>>ch;
    string cmp_str ={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    string str;
    cin>>str;
    vector<char>answer;

    if(ch=='R'){
        for(int i=0;i<str.size();i++){
            for(int j=0;j<cmp_str.size();j++){
                if(cmp_str[j]==str[i]){
                    answer.push_back(cmp_str[j-1]);
                }
            }
        }
    }else{
        for(int i=0;i<str.size();i++){
            for(int j=0;j<cmp_str.size();j++){
                if(cmp_str[j]==str[i]){
                    answer.push_back(cmp_str[j+1]);
                }
            }
        }
    }
   for(auto it=answer.begin();it!=answer.end();it++){
        cout<<*it;
    }
    cout<<'\n';
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