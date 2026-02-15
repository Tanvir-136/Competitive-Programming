#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);
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
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    --f;
    int key = a[f];
    sort(all(a), greater<int>());
    --k;
   if(n - 1 != k && a[k] == key && a[k + 1] == key){
        cout << "MAYBE" << nl;
    }else if(a[k] <= key){
        yes
    } else{
        no
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