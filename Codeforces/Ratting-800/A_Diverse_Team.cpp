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
    set<int> st;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i + 1;
        st.insert(a[i].first);
    }
    if(st.size() < k){
        no;
    }else{
        yes;
        auto it = st.begin();
        for(int i = 0; i < k; i++, it++) {
            for(int j = 0; j < n; j++) {
                if(a[j].first == *it) {
                    cout << a[j].second << " ";
                    break;
                }
            }
        }
        cout << nl;
    }
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