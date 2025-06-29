// A. Beautiful String
// Author: Md.Tanvir Islam
// Date:25-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve() {
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == '?') {
            for(char ch = 'a'; ch <= 'c'; ch++) {
                if((i == 0 || s[i - 1] != ch) && (i == n - 1 || s[i + 1] != ch)) {
                    s[i] = ch;
                    break;
                }
            }
        }
    }
    // cout << s << '\n';
    bool found = false;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            found = true;
            break;
        }
    }
    if(found){
        cout<<-1<<'\n';
    }else{
        cout<<s<<'\n';
    }
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
