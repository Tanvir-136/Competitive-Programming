//div - 04(993) problem- D
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
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    vector<int> missing;
    for (int i = 1; i <= n; ++i) {
        if (st.find(i) == st.end()) {
            missing.push_back(i);
        }
    }
    int m = 0;  
    for (int i = 0; i < n; ++i) {
        if (st.find(a[i]) != st.end()) {
            cout << a[i] << ' ';
            st.erase(a[i]);
        } else {
            cout << missing[m++] << ' ';
        }
    }
    cout << nl;
}

int main() {
    FAST_IO;
    // Start Here
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}