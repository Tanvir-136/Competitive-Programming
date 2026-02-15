#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout << #x << " = " << x << '\n';
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define ll long long
#define nl '\n'
/*---------------------------------------------------------------*/
using namespace std;
/*---------------------------------------------------------------*/
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    if(a == 0){
        if(b != 0 && c != 0){
            cout << 1 << nl;
            cout << fixed << setprecision(10) << - (c * 1.0) / (b * 1.0) << nl;
        }else if(b == 0 && c == 0){
            cout << -1 << nl;
        }else if(b != 0 && c == 0){
            cout << 1 << nl;
            cout << fixed << setprecision(10) << - (c * 1.0) / (b * 1.0) << nl;
        }else{
            cout << 0 << nl;
        }
        return;
    }
    double dis = 1.0 * b * b - 4.0 * a * c;
    if(dis < 0){
        cout << 0 << nl;
    }else if(dis == 0){
        cout << 1 << nl;
        double root = - (double) b / (2.0 * a);
        cout << fixed << setprecision(10) << root << nl;
    }else {
        cout << 2 << nl;
        double root1 = (-1.0 * b + sqrt(dis)) / (2.0 * a);
        double root2 = (-1.0 * b - sqrt(dis)) / (2.0 * a);
        if(root1 < root2){
            cout << fixed << setprecision(10)<< root1 << nl;
            cout << fixed << setprecision(10)<< root2 << nl;
        }else{
            cout << fixed << setprecision(10)<< root2 << nl;
            cout << fixed << setprecision(10)<< root1 << nl;
        }
    }
}
int main(){
    FAST_IO;
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}