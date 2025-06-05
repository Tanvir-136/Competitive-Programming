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
    vector<string> a(n);
    for(auto &it : a){
        cin >> it;
    }
    stack<string> st;
    st.push("logout");
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == "login"){
            st.push(a[i]);
        }else if(a[i] == "logout"){
            if(st.top() == "login"){
                while(!st.empty()){
                    st.pop();
                }
                st.push(a[i]);
            }
        }
        if(a[i] == "private"){
            if(st.top() == "logout"){
                ++cnt;
            }
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