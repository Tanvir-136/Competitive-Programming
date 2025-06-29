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
    int decimal = s.find_first_of('.');
    if (decimal == string::npos){
        decimal = s.size();
    } else {
        s.erase(decimal, 1);
    }
    int zero = s.find_first_not_of('0');
    s.erase(s.begin(), s.begin() + zero);
    s.erase(s.begin() + s.find_last_not_of('0') + 1, s.end());

    if (s.size() >= 2){
        s.insert(1, 1, '.');
    }
    cout << s;
    if (decimal -= zero + 1){
        cout << 'E' << decimal;
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