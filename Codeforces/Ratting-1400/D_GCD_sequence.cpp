#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
/*---------------------------------------------------------------*/
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    int idx = -1;
    for(int i = 0; i < n - 2; ++i){
        int g1 = __gcd(a[i], a[i + 1]);
        int g2 = __gcd(a[i + 1], a[i + 2]);
        if(g1 > g2){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        yes;
        return;
    }
    int b[] = {idx, idx + 1, idx + 2};
    for(int idx : b){
        vector<int> tmp = a;
        tmp.erase(tmp.begin() + idx);
        bool ok = true;
        for(int i = 0; i < tmp.size() - 2; ++i){
            int g1 = __gcd(tmp[i], tmp[i + 1]);
            int g2 = __gcd(tmp[i + 1], tmp[i + 2]);
            if(g1 > g2){
                ok = false;
                break;
            }
        }
        if(ok){
            yes;
            return;
        }
    }

    no;
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}