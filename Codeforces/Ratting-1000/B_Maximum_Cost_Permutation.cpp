#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    cin >> n;
    vector<int> a(n), tmp;
    for(auto &it : a){
        cin >> it;
    }
    multiset<int> st;
    for(int i = 1; i <= n; ++i){
        st.insert(i);
    }
    for(int i = 0; i < n; ++i){
        if(a[i] != 0){
            st.erase(st.find(a[i]));
        }
    }
    for(int i = 0; i < n; ++i){
        if(a[i] == 0){
            auto it = prev(st.end());
            a[i] = *it;
            st.erase(it);
        }
    }
    // for(const auto& element : a){
    //     cout << element << endl;
    // }
    tmp = a;
    sort(all(tmp));
    int l = 0, r = n - 1;
    while(l < n && a[l] == tmp[l]){
        ++l;
    }
    if(l == n){
        cout << 0 << nl; 
        return;
    }
    while(r >= 0 && a[r] == tmp[r]){
        --r;
    }
    // dbg(r)
    int ans = r - l + 1;
    cout << ans << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}