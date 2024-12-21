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
    int k;
    cin >> k;
    vector<int> a(k);
    for (int i = 0; i < k; ++i){
        cin >> a[i];
    } 
    unordered_set<int> st;
    int target = k - 2;
    for (int i = 0; i < k; ++i){
        if (target % a[i] == 0 && st.count(target / a[i])) {
            cout << a[i] << ' ' << target / a[i] << nl;
            return;
        }
        st.insert(a[i]);
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