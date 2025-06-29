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
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n * n);
    map<int, int> mp1;
    for (auto &x : a){
        cin >> x;
        mp1[x]++;
    }
    map<int, int> mp2;
    int matrix[n][n];
    memset(matrix, 0, sizeof(matrix));
    matrix[0][0] = *min_element(all(a));
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == 0 && j == 0){
                mp2[matrix[i][j]]++;
                continue;
            }else if (i == 0){
                matrix[i][j] += matrix[i][j-1] + d;
                mp2[matrix[i][j]]++;
            }else{
                matrix[i][j] += matrix[i-1][j] + c;
                mp2[matrix[i][j]]++;
            }
        }
        
    }
    if(mp1.size()!=mp2.size()){
        no;
    }else{
        for(auto it: mp1){
            if ((mp1[it.first] != mp2[it.first]) || (mp1[it.second] != mp2[it.second])){
                no;
                return;
            }
        }
        yes;
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