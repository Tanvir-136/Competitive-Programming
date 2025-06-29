// C. Restore the Array
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
    int n;
    cin >> n;
    vector<int> b(n - 1), a(n);
    for (int i = 0; i < n - 1; i++){
        cin >> b[i];
    }
    a[0] = b[0];
    for (int i = 1; i < n - 1; i++){
        a[i] = (b[i - 1] < b[i]) ? b[i - 1] : b[i];
    }
    a[n - 1] = b[n - 2];
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
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