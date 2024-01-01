// B. Fair Division(https://codeforces.com/contest/1472/problem/B)
// Author: Md.Tanvir Islam
// Date:01-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve(){
    int n;
    cin>>n;
    int sum = 0,cnt_1=0,cnt_2=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if (x % 2 == 0)
            cnt_2++;
        else
            cnt_1++;
        sum+=x;
    }
    if ((cnt_1 + 2 * cnt_2) % 2 != 0){
        cout << "NO\n";
    }
    else{
        sum/=2;
        if (sum % 2 == 0 || (sum % 2 == 1 && cnt_1 != 0)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
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