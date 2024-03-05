// B. Make Almost Equal With Mod
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
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll res = 2;
    while (true){
        set<ll> rem;
        for (ll i = 0; i < (ll)a.size(); i++){
            rem.insert(a[i] % res);
        }
        if (rem.size() >= 2){
            break;
        }
        res *= 2;
    }
    cout << res << nl;
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