// B. Turtle Math: Fast Three Task
// Author: Md.Tanvir Islam
// Date:27-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    int rem = sum % 3;
    
    if(rem == 0){
        cout << 0 << nl;
    }else{
        if(rem == 1){
            for (int i = 0; i < n; i++){
                if (a[i] % 3 == 1) {
                    a.erase(a.begin() + i);
                    break;
                }
            }
            ll sum1 = accumulate(a.begin(), a.end(), 0);
            if (sum1 % 3 == 0){
                cout << 1 << nl;
            }
            else{
                cout << 2 << nl;
            }
        }else{
            for (int i = 0; i < n; i++){
                if (a[i] % 3 == 2) {
                    a.erase(a.begin() + i);
                    break;
                }
            }
            ll sum2 = accumulate(a.begin(), a.end(), 0);
            if (sum2 % 3 == 0){
                cout << 1 << nl;
            }
            else{
                if (++sum2 % 3 == 0){
                    cout<<1<<nl;
                }else{
                    cout<<2<<nl;
                }
            }
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