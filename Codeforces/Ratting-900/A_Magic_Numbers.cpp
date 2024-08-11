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
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
  
void solve(){
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); ) {
        if (n.substr(i, 3) == "144") {
            i += 3;
        } else if (n.substr(i, 2) == "14") {
            i += 2;
        } else if (n.substr(i, 1) == "1") {
            i += 1;
        } else {
            no;
            return;
        }
    }
    yes;
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

// #include <bits/stdc++.h>
// #define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// #define dbg(x) cout<<#x<<" = "<<x<<'\n';
// #define all(x) (x).begin(), (x).end()
// #define yes cout<<"YES"<<'\n';
// #define no cout<<"NO"<<'\n';
// #define ll long long
// #define MOD 1e9 + 7
// #define nl '\n'
// /*---------------------------------------------------------------*/
// const int N = 1e5 + 10;
// using namespace std;
// /*---------------------------------------------------------------*/
  
// void solve(){
//     string n;
//     cin >> n;
//     regex pattern("^(1|14|144)+$");
//     if (regex_match(n, pattern)){
//         yes;
//     } else {
//         no;
//     }
// }

// int main(){
//     FAST_IO;
//     //Start Here
//     int t=1;
//     //cin >> t;
//     while (t--){
//         solve();
//     }
//     return 0;
// }