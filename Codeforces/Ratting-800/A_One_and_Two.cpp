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
    vector<int> a(n), ans;
    int one = 0 , two = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] == 1){
            one++;
        }else{
            two++;
            ans.push_back(i + 1);
        }
    }
    //dbg(two)
    if(two & 1){
        cout << -1 << nl;
    }else{
        if(two == 0){
            cout << 1 << nl;
        }else{
            int size = (ans.size() / 2) - 1;
            // dbg(size)
            cout << ans[size] << nl;
        }
    }
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