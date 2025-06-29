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

    string x = "", y = "";
    bool flag = false;

    for (char digit : n){
        int d = digit - '0';
        if (d % 2 == 0){
            x += char('0' + d / 2);
            y += char('0' + d / 2);
        }else{
            if (flag){
                x += char('0' + d / 2);
                y += char('0' + d / 2 + 1);
            }else{
                x += char('0' + d / 2 + 1);
                y += char('0' + d / 2);
            }
            flag = !flag;
        }
    }
    cout << stoi(x) << " " << stoi(y) << endl;
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