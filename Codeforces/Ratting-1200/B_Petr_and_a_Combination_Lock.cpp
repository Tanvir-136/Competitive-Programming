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
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a) {
        cin >> it;
    }
    int b = 1 << n;
    bool flag = 0;
    for(int i = 0; i < b; i++) {
        int sum = 0;
        for(int bits = 0; bits < n; bits++) {
            if(i & (1 << bits)) {
                sum += a[bits];
            } else {
                sum -= a[bits];
            }
        }
        if(sum % 360 == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        yes;
    } else {
        no;
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
