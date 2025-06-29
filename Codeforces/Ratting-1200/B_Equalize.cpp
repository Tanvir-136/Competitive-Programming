// B. Equalize
// Author: Md.Tanvir Islam
// Date:28-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
//---------------------------------------------------------------//
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    int mx = 1;
    for (int i = 0; i < a.size(); i++){
        int k = a[i] + n - 1;
        int it = upper_bound(all(a), k) - a.begin() - i;
        mx = max(mx, it);
    }
    cout << mx << nl;
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