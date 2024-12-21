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
    vector<int> a(5);
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }
    vector<pair<int, string>> s;
    for (int mask = 1; mask < (1 << 5); ++mask) { 
        string name = "";
        int score = 0;
        for (int i = 0; i < 5; ++i) {
            if (mask & (1 << i)) { 
                name += 'A' + i; 
                score += a[i]; 
            }
        }
        s.emplace_back(score, name);
    }
    sort(s.begin(), s.end(), [](const pair<int, string> &p1, const pair<int, string> &p2) {
        if (p1.first != p2.first)  return p1.first > p2.first; 
        return p1.second < p2.second;
     });
    for (auto& p : s) {
        cout << p.second << nl;
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