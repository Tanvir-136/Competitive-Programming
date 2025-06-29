#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    string s;
    cin >> s;
    int p;
    cin >> p;
    vector<pair<int, int>> char_val;
    ll sum = 0;
    
    for (int i = 0; i < s.size(); i++) {
        int val = s[i] - 96;
        char_val.push_back({val, i});
        sum += val;
    }
    if (sum <= p) {
        cout << s << nl;
        return;
    }
    sort(char_val.rbegin(), char_val.rend());
    for (int i = 0; i < char_val.size() && sum > p; i++) {
        sum -= char_val[i].first;
        s[char_val[i].second] = '*';
    }
    for (char c : s) {
        if (c != '*') {
            cout << c;
        }
    }
    cout << nl;
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