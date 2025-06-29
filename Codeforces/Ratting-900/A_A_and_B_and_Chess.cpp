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
void solve()
{
    char a[8][8];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> a[i][j];
        }
    }
    int ans1 = 0 , ans2 = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (a[i][j] >= 'A' && a[i][j] <= 'Z'){
                if(a[i][j]=='Q'){
                    ans1 += 9;
                }else if(a[i][j]=='R'){
                    ans1 += 5;
                }else if(a[i][j]=='B'|| a[i][j] == 'N'){
                    ans1 += 3;
                }else if(a[i][j]=='P'){
                    ans1 += 1;
                }else{
                    ans1 += 0;
                }
            }else{
                if(a[i][j]=='q'){
                    ans2 += 9;
                }else if(a[i][j]=='r'){
                    ans2 += 5;
                }else if(a[i][j]=='b' || a[i][j] == 'n'){
                    ans2 += 3;
                }else if(a[i][j]=='p'){
                    ans2 += 1;
                }else{
                    ans2 += 0;
                }
            }
        }
    }
    if(ans1 > ans2){
        cout << "White" <<nl;
    }else if(ans1 < ans2){
        cout << "Black" << nl;
    }else{
        cout << "Draw" <<nl;
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