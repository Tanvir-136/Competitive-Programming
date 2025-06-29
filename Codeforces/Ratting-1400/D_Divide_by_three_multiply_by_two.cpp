#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, ll>> a(n);
    for (int i = 0; i < n; i++){
        ll value; 
        cin >> value;
        a[i].second = value;
        a[i].first = 0;
        while (value % 3 == 0){
            value /= 3;
            a[i].first--;
        }
    }
    sort(all(a));  
    for (int i = 0; i < n; i++){
        cout << a[i].second << " "; 
    }
    cout << nl;
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