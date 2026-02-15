#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    cin >> n;
    vector<ll> a(n + 2);
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a));
    
    ll sum = accumulate(a.begin(), a.end() - 1, 0LL);
    int skip = -1;
    bool flag = false;

    for(int i = 0; i < n + 1; ++i){
        ll target = sum - a[i];
        if(a[n + 1] == target){
            flag = true;
            skip = i;
            break;
        }
    }
    if(flag){
        for(int i = 0; i < n + 1; ++i){
            if(i == skip) continue;
            cout << a[i] << ' ';
        }
        cout << nl;
        return;
    }

    sum = accumulate(a.begin(), a.end() - 2, 0LL);
    if(sum == a[n]){
        flag = true;
    }
    if(flag){
        for(int i = 0; i < n; ++i){
            cout << a[i] << ' ';
        }
        cout << nl;
        return;
    }
    cout << -1 << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}