// A. Start Up
// Author: Md.Tanvir Islam
// Date:03-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    string str;
    cin >> str;

    unordered_set<char> mirror_letters = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    bool is_mirror = true;
    int len = str.length();

    for (int i = 0; i <= len / 2; ++i) {
        if (str[i] != str[len - i - 1] || mirror_letters.find(str[i]) == mirror_letters.end()) {
            is_mirror = false;
            break;
        }
    }
    if (is_mirror) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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

