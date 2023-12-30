// B. Watering System (https://codeforces.com/problemset/problem/967/B)
// Author: Md.Tanvir Islam
// Date:30-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve() {
    int n, A, B;
    cin >> n >> A >> B;

    vector<int> holes(n);
    for (int i = 0; i < n; i++) {
        cin >> holes[i];
    }
    sort(holes.begin() + 1, holes.end(), greater<int>());
    int totalSum = accumulate(holes.begin(), holes.end(),0);
    int cnt = 0;

    for (int i = 1; i < n; i++) {
        if ((holes[0] * A) / totalSum >= B) {
            break;
        }
        totalSum -= holes[i];
        cnt++;
    }
    cout << cnt << "\n";
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