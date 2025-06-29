// B. XOR = Average
// Author: Md.Tanvir Islam
// Date:04-02-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
 
void solve() {
    int n;
    cin >> n;
    if (n % 2 == 1) {
        for (int i = 1; i <= n; i++) {
            cout << 1<<" ";
        }
        cout<<'\n';
    } else {
        for (int i = 1; i <= n - 2; i++) {
            cout << 2 << " ";
        }
        cout << 1 << " " << 3 << '\n';
    }
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

