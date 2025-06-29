// D. Three Activities
// Author: Md.Tanvir Islam
// Date:09-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    for (int i = 0; i < n; i++){
        cin>>c[i];
    }
    vector<int>pa(n),pb(n),pc(n);

    //filled with consecutive integers starting from 0.
    iota(pa.begin(),pa.end(),0);
    iota(pb.begin(),pb.end(),0);
    iota(pc.begin(),pc.end(),0);

    //sort them based on the corresponding arrays a, b, and c in descending order
    //this is efficient way to find index of maximum element
    sort(pa.begin(),pa.end(),[&](int i,int j){
        return a[i] > a[j];
    });
    sort(pb.begin(),pb.end(),[&](int i,int j){
        return b[i] > b[j];
    });
    sort(pc.begin(),pc.end(),[&](int i,int j){
        return c[i] > c[j];
    });
    int ans = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                int x = pa[i], y = pb[j], z = pc[k];
                if (x != y && y != z && z != x){
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }
    }
    cout << ans << nl;
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