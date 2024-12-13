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
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    
    char mx_ch = s[0];
    int mx_freq = 0;

    char mn_ch = s[0];
    int mn_freq = n;

    for (auto &it : mp) {
        if (it.second > mx_freq) {
            mx_ch = it.first;
            mx_freq = it.second;
        }
        if (it.second < mn_freq) {
            mn_ch = it.first;
            mn_freq = it.second;
        }
    }
    if (mx_freq == mn_freq) {
        for (int i = 0; i < n; ++i) {
            if (s[i] != mx_ch) {
                s[i] = mx_ch;
                break;  
            }
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (s[i] == mn_ch) {
                s[i] = mx_ch;
                break; 
            }
        }
    }
    cout << s << nl;
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}