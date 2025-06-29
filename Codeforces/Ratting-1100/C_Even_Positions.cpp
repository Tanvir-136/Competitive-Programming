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
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n - 1; ++i){
        if(s[i] == '(' && s[i + 1] == '_'){
            s[i + 1] = ')';
        }
    }
    // dbg(s);
    int left = count(all(s), '(');
    int right = count(all(s), ')');

    if(left > right){
        for(int i = 0; i < n; ++i){
            if(s[i] == '_')
                s[i] = ')';
        }
    } else {
        for(int i = 0; i < n; ++i){
            if(s[i] == '_')
                s[i] = '(';
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n - 1; ++i){
        if(s[i] == '(' && s[i + 1] == ')'){
            ans += 1;
            s[i] = '*';
            s[i + 1] = '*';
        }
    }
    // dbg(s)
    // dbg(ans)
    stack<char> st;
    for(int i = 0; i < n; ++i){
        if(s[i] == '('){
            while(s[i] != ')'){
                st.push(s[i]);
                ++i;
            }

        } 
        if(s[i] == ')'){
            ans += st.size();
            while(!st.empty()){
                st.pop();
            }
        }
    }
    cout << ans << nl;
}
int main(){
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}