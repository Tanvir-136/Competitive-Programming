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
    string n1, n2;
    cin >> n1 >> n2;
    int n = n1.size();
    bool f = false;
    for (int i = 0; i < n; i++){
        if (n1[i] < n2[i] != f){
            swap(n1[i], n2[i]);
        }
        f |= (n1[i] != n2[i]);
    }
    cout << n1 << nl;
    cout << n2 << nl;
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