#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define nl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s, tmp;
    cin >> s;
    tmp = s;
    sort(all(tmp));
    if(s == tmp){
        cout << 0 << nl;
        return;
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(tmp[i] == '1'){
            break;
        }else{
            if(s[i] == '1'){
                ++cnt;
            }
        }
    }
    cout << cnt << nl;
}
int main(){
    FAST_IO;
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}