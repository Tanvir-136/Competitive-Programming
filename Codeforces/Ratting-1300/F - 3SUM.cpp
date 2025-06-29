// F - 3SUM (https://codeforces.com/contest/1692/problem/F)
// Author: Md. Tanvir Islam
// Date: 27-11-23

//--------------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//-------------------------------------------------------------------//

void solve(){
    int n; cin>>n;
    int cnt[10]={};
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cnt[x%10]++;
    }
    vector<int>v;
    for(int i=0;i<10;i++){
        for(int j=0;j<min(cnt[i],3);j++){
            v.push_back(i);
        }
    }
    int m= v.size();
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                if((v[i] + v[j] + v[k])%10 == 3){
                    cout<<"YES\n";
                    return;
                } 
            }
        }
    }
    cout<<"NO\n";
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