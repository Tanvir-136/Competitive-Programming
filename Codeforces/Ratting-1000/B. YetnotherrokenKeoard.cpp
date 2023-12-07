// Codeforces Round 913 (Div. 3)
// B. YetnotherrokenKeoard(https://codeforces.com/contest/1907/problem/B)
// Author: Md.Tanvir Islam
// Date:07-12-23

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
    int n = s.size();
    vector<int> capital,small;
    vector<bool> ok(n+2,true);
    for(int i=0;i<n;i++){
        if(s[i]=='b'){
            if(!small.empty()){
                ok[small.back()]=false;
                small.pop_back();
            }
            ok[i]=false;
        }else if(s[i]=='B'){
            if(!capital.empty()){
                ok[capital.back()]=false;
                capital.pop_back();
            }
            ok[i]=false;
        }else if(s[i]>='A' and s[i]<='Z'){
            capital.push_back(i);
        }else{
            small.push_back(i);
        }
    }
    for(int i=0;i<n;i++){
        if(ok[i]){
            cout<<s[i];
        }
    }
    cout<<'\n';
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