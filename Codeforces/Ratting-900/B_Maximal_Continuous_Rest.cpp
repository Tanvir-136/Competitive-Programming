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
using namespace std;
/*---------------------------------------------------------------*/

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    vector<int> b = a;
    b.insert(b.end(), all(a));
    int cnt = 0, mx = 0;
    for(int i = 0; i < 2 * n; ++i){
        if(b[i] == 1){
            ++cnt;
            mx = max(mx, cnt);
        }else{
            cnt = 0;
        }
    }
    cout << mx << nl;
}

int main(){
    FAST_IO;
    solve();
    return 0;
}
