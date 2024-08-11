#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;
void solve()
{
    ll A, B;
    cin >> A >> B;
    ll x = A;
    ll y = A * B;
    ll z = A + A * B ; 
    if(B != 1){
        yes;
        cout << x << ' ' << y << ' ' << z << nl;
    }else{
        no;
    } 
}
int main(){
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
