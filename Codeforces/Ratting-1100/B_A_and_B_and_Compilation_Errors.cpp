#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve(){
    int n;
    cin >> n;
    vector<int> a(n) , b(n - 1), c(n - 2);
    for(auto &it : a){
        cin >> it;
    }
    for(auto &it : b){
        cin >> it;
    }
    for(auto &it : c){
        cin >> it;
    }
    ll sum1 = accumulate(all(a),0LL);
    ll sum2 = accumulate(all(b),0LL); 
    ll sum3 = accumulate(all(c),0LL);
    cout << sum1 - sum2 << nl;
    cout << sum2 - sum3 << nl;  
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