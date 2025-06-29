// A. Sonya and Hotels (https://codeforces.com/problemset/problem/1004/A)
// Author: Md.Tanvir Islam
// Date:25-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve(){
    int n, d;
    cin >> n >> d;
    vector<int> ar(n);
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }

    int cnt = 2;
    for(int i = 0; i < n - 1; i++){
        if(ar[i + 1] - ar[i] > 2 * d){
            cnt += 2;
        } else if (ar[i + 1] - ar[i] == 2 * d){
            cnt += 1;
        }
    }
    cout << cnt << '\n';
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