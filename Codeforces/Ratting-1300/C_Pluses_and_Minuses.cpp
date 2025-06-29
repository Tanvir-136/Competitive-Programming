#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
const int inf = 1e7;
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    string s;
    cin >> s;
    ll res = 0;
    int cur = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '+'){
            cur = cur + 1;
        }else{
            cur = cur - 1;
        }
        if (cur < 0){
            res += (i + 1);
            cur = 0;
        }
        res++;
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