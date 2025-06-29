// B. A Balanced Problemset?
// Author: Md.Tanvir Islam
// Date:04-02-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int x, n;
    cin >> x >> n;
    int ans = 1;
    for (int i = 1; i * i <= x; i++){
        if (x % i == 0) {
            if (n <= x / i)
                ans = max(ans, i);
            if (n <= i)
                ans = max(ans, x / i);
        }
    }
    cout << ans << '\n';
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