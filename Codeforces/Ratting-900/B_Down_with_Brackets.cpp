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
void solve(){
    string s;
    cin >> s;
    int cnt = 0; 
    bool found = false;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(') cnt++;
        else cnt--;
        if (cnt == 0 && i != n - 1) {
            found = true; 
            break;
        }
    }
    if (found){
        yes;
    } 
    else{
        no;
    } 
}
int main(){
    FAST_IO;
    //Start Here
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}