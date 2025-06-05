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
    int n;
    string s;
    cin >> n >> s;
    int tot1 = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        if (s[i] == '1'){
            tot1++;
            a[i] = 1;
        }else{
            a[i] = -1;
        }
    }
    int best = 0, cur = 0;
    //kadane's algorithm to find maximum sub array sum
    for (int x : a) {
        cur = max(0, cur + x);
        best = max(best, cur);
    }
    cout << (tot1 - best) << nl;
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