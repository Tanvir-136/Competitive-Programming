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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), prefix(n);
    for(auto &it : a){
        cin >> it;
    }
    ll sum = accumulate(all(a), 0LL);
    prefix[0] = a[0];
    for(int i = 1; i < n; ++i){
        prefix[i] = prefix[i - 1] + a[i];
    }
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        --l, --r;
        ll tmp_sum = 0;
        if(l <= 0){
            tmp_sum = prefix[r] - 0;
        }else{
            tmp_sum = prefix[r] - prefix[l - 1];
        }
        ll tmp_sum2 = sum - tmp_sum;
        tmp_sum2 += ((r - l + 1) * k);
        if (tmp_sum2 % 2 != 0){
            yes;
        } else {
            no;
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