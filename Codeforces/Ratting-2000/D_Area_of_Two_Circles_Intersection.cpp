#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define dbg(x) cout<<#x<<" = "<<x<<'\n';
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define ld long double
#define MOD 1e9 + 7
#define nl '\n'
/*---------------------------------------------------------------*/
const long double PI = 22 / 7;
using namespace std;
/*---------------------------------------------------------------*/
void solve(){
    ld x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    ld d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    ld area = 0.0;
    if (d >= r1 + r2) {
        area = 0.0;
    } else if (d <= abs(r1 - r2)) {
        ld r = min(r1, r2);
        area = PI * r * r;
    } else {
        // Compute the angles subtended by the chords using the cosine rule
        ld angle1 = acos((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d));
        ld angle2 = acos((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d));

        // Segment area = Sector Area of the Circle - Triangle Area
        ld segment1 = r1 * r1 * angle1 - r1 * r1 * sin(2 * angle1) / 2; 
        ld segment2 = r2 * r2 * angle2 - r2 * r2 * sin(2 * angle2) / 2;

        area = segment1 + segment2;
    }
    cout << fixed << setprecision(10) << area << endl;
}

int main(){
    FAST_IO;
    // Start Here
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }
    return 0;
}