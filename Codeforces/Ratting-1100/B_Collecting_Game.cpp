// B. Collecting Game
// Author: Md.Tanvir Islam
// Date: 10-02-24
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
    int n;
    cin >> n;
    pair<int,int> p[n];
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> p[i].first;
        p[i].second = i;
        sum += p[i].first;
    }
    sort(p, p + n);
    vector<int> ans(n);
    for(int i = n - 1; i >= 0; i--){
        if(i == n - 1){
            ans[p[i].second] = i;
        }
        else{
            if(sum >= p[i + 1].first){
                ans[p[i].second] = ans[p[i + 1].second];
            }
            else{
                ans[p[i].second] = i;
            }
        }
        sum -= p[i].first;
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] <<" ";
    }
    cout<<nl;
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