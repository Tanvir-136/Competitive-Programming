// C. Premutation (https://codeforces.com/contest/1790/problem/C)
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
    int n;
    cin >> n;
    int matrix[n + 5][n];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    map<int, int> mp1;
    map<int, int> mp2;
    for (int i = 1; i <= n; i++){
        mp1[matrix[i][n - 1]] = i;
        mp2[matrix[i][n - 1]]++;
    }
    int index = 0, value;
    for (auto it : mp2){
        if (it.second == 1)
            index = it.first;
        else
            value = it.first;
    }
    for (int i = 1; i < n; i++){
        cout << matrix[mp1[index]][i] << " ";
    }
    cout << value << '\n';
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
