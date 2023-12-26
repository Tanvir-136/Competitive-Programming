// A. Codecraft III (https://codeforces.com/problemset/problem/45/A)
// Author: Md.Tanvir Islam
// Date:26-12-23
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    string key;
    cin >> key;
    int k;
    cin >> k;

    string month[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int i = 1; i <= 12; i++) {
        if (key == month[i]) {
            int new_month_index = (i + k) % 12;
            if (new_month_index == 0)
                new_month_index = 12;

            cout << month[new_month_index] << '\n';
            break;
        }
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