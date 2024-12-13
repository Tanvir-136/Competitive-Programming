#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"Yes"<<'\n';
#define no cout<<"No"<<'\n';
#define ll long long
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int half = n / 2;
    if(n % 2 == 0){
        no;
        return;
    }
    bool f1 = true, f2 = true, f3 = true;
    for(int i = 0; i < half; ++i){
        if(s[i] != '1'){
            f1 = false;
            break;
        }
    }
    if (s[half] != '/')
        f2 = false;
    for(int i = half + 1; i < n; ++i){
        if(s[i] != '2'){
            f3 = false;
            break;
        }
    }
    if(f1 && f2 && f3){
        yes;
    }else{
        no;
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