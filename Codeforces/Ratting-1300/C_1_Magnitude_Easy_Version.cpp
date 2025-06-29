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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a){
        cin >> x;
    }
    ll option1 = 0, option2 = 0;
    for (int i = 0; i < n; i++){
        option1 = option1 + a[i];
        option2 = abs(option2 + a[i]);
        if (abs(option1) > option2){
            option2 = abs(option1);
        }
    }
    cout << max(option1, option2) << nl;
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