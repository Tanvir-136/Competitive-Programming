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
    string s;
    cin >> s;
    int cnt_4 = count(all(s), '4');
    int cnt_7 = count(all(s), '7');
    if (cnt_4 == 0 && cnt_7 == 0){
        cout << -1 << nl;
    }else{
        cout << ((cnt_4 >= cnt_7) ? '4' : '7') << nl;
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