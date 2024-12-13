#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"Yes"<<'\n';
#define no cout<<"No"<<'\n';
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
    if (s.size() % 2 != 0) {
        no;
        return;
    }
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    for (auto [key, value] : freq) {
        if (value != 2) {
            no;
            return;
        }
    }
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] != s[i + 1]) {
            no;
            return;
        }
    }
    yes;
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