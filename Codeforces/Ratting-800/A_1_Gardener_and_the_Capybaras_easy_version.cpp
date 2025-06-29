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
    string s;
    cin >> s;
    int n = s.size();
    bool found = false;

    for (int i = 1; i < n && !found; ++i){
        for (int j = i + 1; j < n && !found; ++j){
            string a = s.substr(0, i);
            string b = s.substr(i, j - i);
            string c = s.substr(j);
            if ((a <= b && c <= b) || (b <= a && b <= c)){
                cout << a << " " << b << " " << c << nl;
                found = true;
            }
        }
    }
    if (!found){
        cout << ":(" << nl;
    }
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