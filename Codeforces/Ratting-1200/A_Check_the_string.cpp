// A. Check the string
// Author: Md.Tanvir Islam
// Date:09-01-24
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
    if(s[0]=='a'){
        bool found = false;
        for(int i=0;i<s.size()-1;i++){
            if (s[i] > s[i + 1])
                found = true;
        }
        if(found){
            cout<<"NO\n";
        }
        else{
            map<char, int> mp;
            for (int i = 0; i < s.size(); i++){
                mp[s[i]]++;
            }
            if ((mp['a'] == mp['c'] || mp['b'] == mp['c']) && (mp['a']>0 && mp['b']>0 && mp['a']>0)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    else{
        cout<<"NO\n";
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