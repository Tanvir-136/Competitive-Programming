#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve(){
    string s;
    cin >> s;
    int n = s.length();
    int a[n];
    a[0] = 0;
    int sum = 0;
    for (size_t i = 0; i < n - 1; i++){
        /* code */
        if(s[i] == s[i + 1]){
            ++sum;
        }
        a[i + 1] = sum;
    }
    int m;
    cin >> m;
    while(m--){
        int x , y;
        cin >> x >> y;
        cout << a[y - 1] - a[x - 1] << nl;
    }
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}