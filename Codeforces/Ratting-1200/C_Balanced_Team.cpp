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
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    sort(all(a));
    int ans = 0;
    for (int i = 0; i < n; i++){
       ans = max(ans, (int) (upper_bound(all(a), a[i] + 5) - a.begin()-i));
    }
    cout<< ans <<nl;
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