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
const int N = 1e5 + 10;
using namespace std;
/*---------------------------------------------------------------*/
 
void solve() {
    int H, W, Si, Sj;
    cin >> H >> W >> Si >> Sj;
    Si--; Sj--;
    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> grid[i][j];
        }
    }
    string X;
    cin >> X;

    for (char move : X) {
        if (move == 'U' && Si > 0 && grid[Si - 1][Sj] == '.') {
            Si--;
        } else if (move == 'D' && Si < H - 1 && grid[Si + 1][Sj] == '.') {
            Si++;
        } else if (move == 'L' && Sj > 0 && grid[Si][Sj - 1] == '.') {
            Sj--;
        } else if (move == 'R' && Sj < W - 1 && grid[Si][Sj + 1] == '.') {
            Sj++;
        }
    }
    cout << (Si + 1) << ' ' << (Sj + 1) << nl;
}


int main(){
    FAST_IO;
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}



// #include <bits/stdc++.h>
// #define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// #define nl '\n'
// using namespace std;

// int main() {
//     FAST_IO;
//     solve();
//     return 0;
// }
