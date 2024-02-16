// B. Count the Number of Pairs
// Author: Md.Tanvir Islam
// Date:10-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
//---------------------------------------------------------------//
void solve()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char, int> mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    int ans = 0;
    int extra = 0;
    for(char i = 'a', j = 'A'; i<='z' && j<='Z'; i++, j++){
        ans+=min(mp[i], mp[j]);
        int gap = abs(mp[i]-mp[j]);
        extra+=(gap/2);
    }
    ans+=min(k, extra);
    cout<<ans<<nl;
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