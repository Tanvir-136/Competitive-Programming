// B.Triple (https://codeforces.com/contest/1669/problem/B)
// Author: Md.Tanvir Islam
// Date: 26-11-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); 

    bool found = false;
    for (int i = 0; i < n - 2; ++i){
        if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2]){
            cout << arr[i] << endl;
            found = true;
            break;
        }
    }
    if (!found){
        cout << "-1" << endl;
    }
}
int main(){
    FAST_IO;
    //Start Here
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}