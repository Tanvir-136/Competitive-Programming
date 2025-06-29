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
    int n, neg = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] < 0) ++neg;
    }
    ll sum = 0;
    if(neg == 0){
        for(int i = 0; i < n; ++i){
            sum += a[i];
        }
        cout << sum << ' ' << 0 << nl;
        return;
    }
    a.erase(remove(all(a), 0), a.end());
    if(a.empty()){
        cout << 0 << ' ' << 0 << nl;
        return;
    }
    int cnt = 0;
    bool open = false;
    for(int i = 0; i < a.size(); ++i){
        sum += abs(a[i]);
        if(a[i] < 0 && !open){
            ++cnt;
            open = true;
        }
        if(a[i] > 0){
            open = false;
        }
    }
    cout << sum << ' ' << cnt << nl;
}

int main(){
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
