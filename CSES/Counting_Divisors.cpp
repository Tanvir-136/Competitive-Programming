#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e6 + 10;
using namespace std;
/*---------------------------------------------------------------*/
vector<int> divisors(N, 0);

void precompute(){
    for(int i = 1; i < N; ++i){
        for(int j = i; j < N; j += i){
            ++divisors[j];
        }
    }
}
void solve(){
    int x;
    cin >> x;
    cout << divisors[x] << nl;
}

int main(){
    FAST_IO;
    //Start Here
    precompute();
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}