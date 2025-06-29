// C. Array Game
// Author: Md.Tanvir Islam
// Date:28-02-24
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
    int n,k;
    cin>>n>>k;
    vector<ll> a(n); 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(all(a));
    ll ans = a[0];
    for(int i=1;i<n;i++){
        ans = min(ans, a[i] - a[i - 1]);
    }
    if (k == 2){
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                ll v = a[j] - a[i];
                int k = lower_bound(a.begin(), a.end(), v) - a.begin();
                if (k > 0){
                    ans = min(ans, v - a[k - 1]);
                }
                if (k < n){
                    ans = min(ans, a[k] - v);
                }
            }
        }
    }
    else if (k > 2){
        cout << 0 << nl;
        return;
    }
    cout <<  ans << nl;
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