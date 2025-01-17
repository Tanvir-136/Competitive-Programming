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
    int a, b;
    cin >> a >> b;
    if(a == 0){
        cout << 1 << nl;
    }else{
        cout << a + b * 2 + 1 << nl;
    }
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
