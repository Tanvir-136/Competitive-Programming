// A. Olympiad
// Author: Md.Tanvir Islam
// Date:18-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    set<int>s;
    for(int i=0 ;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            continue;
        }else{
            s.insert(x);
        } 
    }
    cout<<s.size()<<'\n';
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