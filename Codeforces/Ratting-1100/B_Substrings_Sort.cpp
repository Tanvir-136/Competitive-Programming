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
    for(auto &it : a){
        cin >> it;
    }
    sort(all(a),[](const string &s1 ,const string &s2){
        return s1.size() < s2.size();
    });
    bool flag = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1].find(a[i]) == string::npos) {
            flag = true;
            break;
        }
    }
    if(flag){
        no;
    }else{
        yes;
        for(auto &it : a){
            cout << it << nl;
        }
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