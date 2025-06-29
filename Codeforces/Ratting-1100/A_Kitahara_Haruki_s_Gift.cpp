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
    vector<int> a(n);
    int cnt_100 = 0, cnt_200 = 0;
    for(auto &it : a){
        cin >> it;
        if(it == 100){
            cnt_100++;
        }else{
            cnt_200++;
        }
    }
    if(a.size() == 1){
        no;
        return;
    }
   if (cnt_100 % 2 != 0 || (cnt_100 == 0 && cnt_200 % 2 != 0))
        cout << "NO";
    else
        cout << "YES";
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