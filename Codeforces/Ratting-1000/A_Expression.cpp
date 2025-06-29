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
    int a, b, c;
    cin >> a >> b >> c;
    int ans1 = a + (b * c);
    int ans2 = a * (b + c);
    int ans3 = a * b * c;
    int ans4 = (a + b) * c;
    int ans5 = a + b + c;
    cout << max({ans1, ans2, ans3, ans4, ans5}) << nl;
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