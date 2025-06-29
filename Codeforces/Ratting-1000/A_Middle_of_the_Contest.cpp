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
    int h1, m1;
    char s1;
    cin >> h1 >> s1 >> m1;
    int h2, m2;
    char s2;
    cin >> h2 >> s2 >> m2;
    int x = h1 * 60 + m1;
    int y = h2 * 60 + m2;
    int res = (x + y) / 2;
    cout << setw(2) << setfill('0') << res / 60 << ":" << setw(2) << setfill('0') << res % 60 << nl;
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