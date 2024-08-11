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
    vector<int> a(n);
    int neg = 0;
    ll sum = 0;
    for (auto &it : a){
        cin >> it;
        if (it < 0){
            ++neg;
            it = -it;
        }
        sum += abs(it);
    }
    sort(all(a));
    // dbg(sum)
    if(neg % 2 != 0){
        sum -= 2 * a[0];
    }
    cout << sum << nl;
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