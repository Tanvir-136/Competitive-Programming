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
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> divs;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        int x = a[i];
        int j = 2;
        while (j * j <= x){
            while (x % j == 0){
                divs[j]++;
                x /= j;
            }
            j++;
        }
        if (x > 1)
            divs[x]++;
    }
    bool flag = true;
    for (auto e : divs){
        if (e.second % n != 0){
            flag = false;
            break;
        }
    }
    if(flag){
        yes;
    }else{
        no;
    }
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