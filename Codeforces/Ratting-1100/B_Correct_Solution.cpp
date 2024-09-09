#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define nl '\n'
/*---------------------------------------------------------------*/
using namespace std;
/*---------------------------------------------------------------*/
  
void solve(){
    string a, b;
    cin >> a >> b;
    sort(all(a));
    if (a[0] == '0') {
        for (int i = 1; i < a.size(); ++i) {
            if (a[i] != '0') {
                swap(a[0], a[i]);
                break;
            }
        }
    }
    if (a == b) {
        cout << "OK" << nl;
    } else {
        cout << "WRONG_ANSWER" << nl;
    }
}

int main(){
    FAST_IO;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}