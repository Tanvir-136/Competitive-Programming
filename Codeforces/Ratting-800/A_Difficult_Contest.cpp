#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define nl '\n'
/*---------------------------------------------------------------*/
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    string s;
    cin >> s;
    if(s.find("FFT") != string::npos || s.find("NTT") != string::npos){
        sort(all(s),greater<char>());
        cout << s << nl;
    }else{
        cout << s << nl;
    }
    
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