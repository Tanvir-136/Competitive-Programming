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
    vector<int> a(2 * n),odd, even,ans;
    for(int i = 0; i < 2 * n; ++i){
        cin >> a[i];
        if(a[i] % 2 == 1){
            odd.push_back(i + 1);
        }else{
            even.push_back(i + 1);
        }
    }
    for(int i = 0; i < odd.size(); ++i){
        ans.push_back(odd[i]);
    }
    for (int i = 0; i < even.size(); ++i){
        ans.push_back(even[i]);
    }
    int sz = odd.size();
    if(sz % 2 == 0){            
        // if no of odd number is is odd then, 
        //we remove one element from the odd and also even array.
        for (int i = 0; i < ans.size() - 2; i += 2){
            cout << ans[i] << ' ' << ans[i + 1] << nl;
        }
    }else{
        for(int i = 0; i < odd.size() - 1; i += 2){
            cout << odd[i] << ' ' << odd[i + 1] << nl;
        }
        for(int i = 1; i < even.size() - 1; i += 2){
            cout << even[i] << ' ' << even[i + 1] << nl;
        }
    }
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