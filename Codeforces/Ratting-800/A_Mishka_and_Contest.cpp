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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a){
        cin >> it;
    }
    
    int start = 0, end = n - 1;
    int cnt = 0;
    
    while (start <= end) {
        if (a[start] <= k) {
            ++cnt;
            ++start;
        } else if (a[end] <= k) {
            ++cnt;
            --end;
        } else {
            break;
        }
    }
    cout << cnt << nl;
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