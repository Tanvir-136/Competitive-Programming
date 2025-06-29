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
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<char, int> mp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mp[a[i][j]]++;
        }
    }
    int cnt = 0;
    for (auto it : mp){
        cnt++;
    }
    if (cnt > 2){
        no;
    }else if(cnt == 1){
        no;
    }else{
        char diagonal = a[0][0];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(i==j && a[i][j] != diagonal){
                    no;
                    return;
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i + j == n - 1 && a[i][j] != diagonal){
                    no;
                    return;
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if ((i + j) != (n - 1) && i != j && a[i][j] == diagonal){
                    no;
                    return;
                }
            }
        }
        yes;
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