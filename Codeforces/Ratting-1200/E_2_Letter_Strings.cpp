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
    unordered_map<string, int> freq;
    ll result = 0;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        for (int i = 0; i < 2; ++i){
            char original = s[i];
            for (char ch = 'a'; ch <= 'k'; ++ch){
                if (ch != original){
                    s[i] = ch;
                    result += freq[s];
                }
            }
            s[i] = original;
        }
        ++freq[s];
    }
    cout << result << nl;
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