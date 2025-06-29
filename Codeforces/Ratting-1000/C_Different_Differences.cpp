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
void solve() {
    int n, k;
    cin >> k >> n;

    for(int i = k - 1; i >= 0; i--) {
        int cur = 1;
        vector<int> res;
        res.push_back(cur);
        int dif = 1;
        for(int j = 1; j <= i; j++) {
            cur += dif;
            res.push_back(cur);
            dif++;
        }
        for(int j = (int)res.size() + 1; j <= k; j++) {
            int temp = res.back();
            res.push_back(temp + 1);
        }
        if(res.back() <= n) {
            for (auto it : res)
                cout << it << " ";
            cout << nl;
            return;
        } 
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