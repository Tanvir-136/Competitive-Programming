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
const int N = 1e9 + 10;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a){
        cin >> it;
    }
    int cnt_neg = 0;
    for(auto &it : a){
        if(it < 0){
            ++cnt_neg;
        }
        
    }
    sort(all(a));
    if(n == 1 && a[0] < 0){
        cout << abs(a[0] - 1) << nl;
        return;
    }
    ll cnt = 0;
    if(cnt_neg % 2 == 0){
        for(int i = 0; i < n; ++i){
            if(a[i] < 0){
                cnt += abs(a[i] + 1);
            }else if(a[i] == 0){
                ++cnt;
            }else{
                cnt += (a[i] - 1);
            }
        }
        cout << cnt << nl;
    }else{
        for(int i = 0; i < n; ++i){
            if(a[i] < 0){
                cnt += abs(a[i] + 1);
            }else if(a[i] == 0){
                ++cnt;
            }else{
                cnt += (a[i] - 1);
            }
        }
        bool found = false;
        for(auto &it : a){
            if(it == 0){
                found = true;
                break;
            }
        }
        if(found){
            cnt += 0;
        }
        else{
            int need = -1;
            for (int i = 0; i < n; ++i){
                if (i != 0 && a[i] > 0){
                    need == a[i - 1];
                }
            }
            cnt += abs(need - 1);
        }
        cout << cnt << nl;
    }
}
int main(){
    FAST_IO;
    //Start Here
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}