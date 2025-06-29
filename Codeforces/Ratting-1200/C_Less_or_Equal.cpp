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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(all(a));
    int ans = 0;
    if(k == 0){
        ans = a[k] - 1 ;
    }else{
        ans = a[k - 1];  
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (a[i] <= ans){
            ++cnt;
        }
    }
    if (ans < 1 || cnt != k){
        cout << -1 << nl;
    }else{
        cout << ans << nl;
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