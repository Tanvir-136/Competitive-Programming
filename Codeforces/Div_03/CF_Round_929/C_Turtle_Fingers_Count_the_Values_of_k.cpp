// C. Turtle Fingers: Count the Values of k
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
void solve()
{
    int a, b, l;
    cin >> a >> b >> l;
    set<ll> s;
    for(int i=0;i<=20;i++){
        for(int j=0;j<=20;j++){
            ll val = pow(a, i) * pow(b, j);
            if (l % val == 0){
                s.insert(l / val);
            }
        }
    }
    cout << s.size() << nl;
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