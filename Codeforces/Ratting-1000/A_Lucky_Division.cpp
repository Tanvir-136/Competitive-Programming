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
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 ==0 || n % 477 == 0 || n % 774==0 || n % 474 == 0){
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


/* Another Simplified version */
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
    bool isLucky = false;
    for (int i = 4; i <= n; i++) {
        int temp = i;
        bool flag = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 4 && digit != 7) {
                flag = false;
                break;
            }
            temp /= 10;
        }
        if (flag && n % i == 0) {
            isLucky = true;
            break;
        }
    }
    if (isLucky) {
        yes;
    } else {
        no;
    }
}
int main() {
    FAST_IO;
    // Start Here
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}