// A. Insert Digit
// Author: Md.Tanvir Islam
// Date:08-01-24

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n, d;
    string s;
    cin >> n >> d >> s;
    char c = d + '0';
    int sz = s.size();
    bool inserted = false;

    for(int i = 0; i < sz; i++) {
        if(s[i] < c) {
            s.insert(i, 1, c);
            inserted = true;
            break;
        }
    }
    if (!inserted) {
        s.insert(sz, 1, c);
    }

    cout << s << '\n';
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