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
    cin >> n;
    if(n == 2){
        cout << -1 << nl;
    }else{
        vector<ll> odd, even, overall;
        for(ll i = 1; i <= n * n; i += 2){
            odd.push_back(i);
        }
 
        for(ll i = 2; i <= n * n; i += 2){
            even.push_back(i);
        }
        reverse(all(odd));
        reverse(all(even));

        overall.insert(overall.end(), all(odd));
        overall.insert(overall.end(), all(even));
        if(n != 3){
            for (int i = 0; i < overall.size(); ++i){
                if (i != 0 && (i + 1) % n == 0){
                    cout << overall[i] << nl;
                }else{
                    cout << overall[i] << ' ';
                }
            }
        }else{
            cout << "2 9 7" << nl;
            cout << "4 6 3 " << nl;
            cout << "1 8 5" << nl;
        }
    }
    cout << nl;
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