// F. Eating Candies (https://codeforces.com/contest/1669/problem/F)
// Author: Md.Tanvir Islam
// Date:05-12-23

//---------------------------------------------------------------//
#include<iostream>
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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int left=0,right=n-1,ans = 0;
    int alice = v[0], bob = v[n-1];

    while(left<right){
        if(alice == bob){
            ans = max(ans, left + 1 + n - right);
        } 
        if(alice <= bob){
            left+=1;
            alice+=v[left];
        }else if(bob < alice){
            right-=1;
            bob+=v[right];
        }
    }
    cout<<ans<<'\n';
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