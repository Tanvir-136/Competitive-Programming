// B. Forming Triangles
// Author: Md.Tanvir Islam
// Date:29-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(all(a));
    ll total = 0;
    for(auto it: mp){
        ll k = it.second;
        total += ((k) * (k - 1) * (k - 2) )/ 6;
        ll index = lower_bound(all(a), it.first) - a.begin();
        total += (k * (k - 1) / 2) * index;
    }
    cout<<total<<nl;
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