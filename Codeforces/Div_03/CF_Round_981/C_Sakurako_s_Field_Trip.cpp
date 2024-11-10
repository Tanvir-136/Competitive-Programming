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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        
        cin >> a[i];
    }

    for (int i = n / 2 - 1; i >= 0; --i){
        if (a[i] == a[i + 1] || a[n - i - 1] == a[n - i - 2]){
            swap(a[i], a[n - i - 1]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++){
        if(a[i] == a[i + 1]){
            ++ans;
        }
    }
    cout << ans << nl;
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