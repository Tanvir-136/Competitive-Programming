// A. Everyone Loves to Sleep
// Author: Md.Tanvir Islam
// Date:21-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
//---------------------------------------------------------------//
void solve()
{
    int n, h, m;
    cin >> n >> h >> m;
    int x = h * 60 + m;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
      int hh, mm;
      cin >> hh >> mm;
      int y = hh * 60 + mm;
      int diff = y - x;
      if (diff < 0) {
        diff += 1440;
      }
      ans = min(ans, diff);
    }
    cout << ans / 60 << " " << ans % 60 << '\n';
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