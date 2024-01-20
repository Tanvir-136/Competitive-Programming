// A. Diversity
// Author: Md.Tanvir Islam
// Date:09-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int sz = s.size();

    if (sz < k) {
        cout << "impossible\n";
        return;
    }
    set<char> unique_chars;
    for (char c : s) {
        unique_chars.insert(c);
    }
    int unique_count = unique_chars.size();
    cout << max(0, k - unique_count) << '\n';
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


// #include <iostream>
// #include <unordered_set>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int k;
//     cin >> k;

//     unordered_set<char> unique_chars;
//     for (char c : s) {
//         unique_chars.insert(c);
//     }
//     int unique_count = unique_chars.size();

//     if (s.length() < k) {
//         cout << "impossible" << endl;
//     } else {
//         cout << max(0, k - unique_count) << endl;
//     }

//     return 0;
// }
