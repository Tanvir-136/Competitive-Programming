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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<pair<char, int>> a(n);
    for (int i = 0; i < n; i++){
        a[i].first = s[i];
        a[i].second = i;
    }
    sort(all(a));
    a.erase(a.begin(), a.begin() + k);
    sort(all(a), [](const pair<char, int> &p1, const pair<char, int> &p2) {
        return p1.second < p2.second;
    });
    for (const auto &p : a) {
        cout << p.first;
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