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
    int m;
    cin >> m;
    int hh = stoi(s.substr(0, 2)); 
    int mm = stoi(s.substr(3, 2));

    int total = hh * 60 + mm + m; 

    int new_hh = (total / 60) % 24;
    int new_mm = total % 60;

    cout << setw(2) << setfill('0') << new_hh << ':' << setw(2) << setfill('0') << new_mm << nl;
}

int main(){
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
