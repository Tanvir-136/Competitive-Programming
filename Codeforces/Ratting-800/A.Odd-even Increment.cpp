// Codeforces Round 784 (Div. 4)
// C. Odd/Even Increments
// Author:Tanvir Islam
// Date: 27-11-23

//------------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long 
using namespace std;
//------------------------------------------------------------------//

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int flag =1;
    for(int i = 0; i < n-2; i++) {
        if(v[i]%2!=v[i+2]%2){
            flag=0;
        }
    }
    if(flag ==0) cout << "NO\n";
    else cout << "YES\n";
}
int main(){
    FAST;
    //Start Here
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}