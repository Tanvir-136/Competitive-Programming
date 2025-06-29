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
    string s;
    cin >> s;
    ll sum = 0;
    int cnt_2 = 0, cnt_3 = 0;
    for (char c : s){
        int digit = c - '0';
        sum += digit;
        if (digit == 2)
            ++cnt_2;
        if (digit == 3)
            ++cnt_3;
    }
    for (int i = 0; i <= min(8, cnt_2); ++i) {
        for (int j = 0; j <= min(8, cnt_3); ++j) {
            if ((sum + i * 2 + j * 6) % 9 == 0) {
                yes;
                return;
            }
        }
    }
    no;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}