// B. Modular Equations (https://codeforces.com/contest/495/problem/B)
// Author: Md.Tanvir Islam
// Date:22-12-23

//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"infinity"<<'\n';
    }else if(b>a){
        cout<< 0 <<'\n';
    }
    else{
        int cnt = 0;
        a = a-b;
        for (int i = 1; i <= (a + 1) / i; i++){
            if (a % i == 0){
                int x = a/i ;
                if(i > b){
                    cnt++;
                }
                if (x != i && x > b){
                    cnt++;
                }
            }
        }
        cout<<cnt<<'\n';
    }
}
int main(){
    FAST_IO;
    //Start Here
    int t=1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}