#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ll long long
#define MOD 1000000007
#define nl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    bool found = false;
    for(int i = 0; i < n - 2; ++i){
        for(int j = i + 2; j < n; ++j){
            if(a[i] == a[j]){
                found = true;
                break;
            }
        }
        if (found)
            break;
    }
    if(found){
        yes;
    } else {
        no;
    }
}
int main(){
    FAST_IO;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}