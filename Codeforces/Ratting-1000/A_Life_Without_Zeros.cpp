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
    string a, b;
    cin >> a >> b;
    int x = stoi(a);
    int y = stoi(b);
    int sum = x + y;
    string s_str = to_string(sum);
    s_str.erase(remove(all(s_str), '0'), s_str.end());
    a.erase(remove(all(a), '0'), a.end());
    b.erase(remove(all(b), '0'), b.end());
    int a1 = stoi(a);
    int b1 = stoi(b);
    int s_str1 = a1 + b1;
    if (s_str == to_string(s_str1)) {
        yes
    } else {
        no 
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