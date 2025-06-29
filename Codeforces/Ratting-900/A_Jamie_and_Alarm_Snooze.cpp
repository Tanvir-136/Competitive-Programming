// A. Jamie and Alarm Snooze(https://codeforces.com/contest/916/problem/A)
// Author: Md.Tanvir Islam
// Date:30-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
bool hasSeven(int num) {
    while (num > 0) {
        if (num % 10 == 7)
            return true;
        num /= 10;
    }
    return false;
}
void solve() {
    int x, hh, mm;
    cin >> x >> hh >> mm;
    int count = 0;
    while (!hasSeven(hh) && !hasSeven(mm)) {
        mm -= x;
        if (mm < 0) {
            mm += 60;
            hh = (hh - 1 + 24) % 24;
        }
        count++;
    }
    cout << count << endl;
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