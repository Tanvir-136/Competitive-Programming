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
    cin>> n;
    string s;
    cin>> s;
    int U = 0, D = 0;
    for(auto it:s){
        if(it == 'U') 
            ++U;
        else
            ++D;
    }
    cout<< ((U % 2!=0)? "YES" : "NO") <<nl;
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