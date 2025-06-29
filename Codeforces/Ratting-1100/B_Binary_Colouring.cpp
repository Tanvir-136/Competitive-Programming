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
//---------------------------------------------------------------//

void solve(){
    int x ;
    cin >> x;
    vector<int> binary;
    // to binary a decimal number
    while(x){
        if(x % 2 == 0){
            binary.push_back(0);
        }else{
            binary.push_back(1);
        }
        x /= 2;
    }
    binary.push_back(0);
    int sz = binary.size();
    for(int i = 0; i < sz - 1; ++i){
        if(binary[i] == 1 && binary[i + 1] == 1){
            for(int j = i; j < sz; ++j){
                if(binary[j] == 0){
                    binary[j] = 1;
                    binary[i] = -1;
                    break;
                }else{
                    binary[j] = 0;
                }
            }
        }
    }
    cout << binary.size() << nl;
    for(auto &it : binary){
        cout << it << ' ';
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