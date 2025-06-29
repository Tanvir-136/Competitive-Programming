#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    map<string , int> mp;
    for(auto &it : a){
        cin >> it;
        ++mp[it];
    }
    int mx = 0;
    for(auto it : mp){
        mx = max(mx , it.second);
    }
    for(auto it : mp){
        if(it.second == mx){
            cout << it.first << nl;
            return;
        }
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