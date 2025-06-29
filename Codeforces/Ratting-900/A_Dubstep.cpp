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
    string s;
    cin >> s;
    string ans = "";
    int n = s.size();
    for(int i = 0; i < n;){
        if(i < n - 2 && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            if(!ans.empty() && ans.back() != ' '){
                ans += ' ';
            }
            i += 3;
        }else{
            ans += s[i];
            i++;
        }
    }
    if(!ans.empty() && ans.back() == ' '){
        ans.pop_back();
    }
    cout << ans << nl;

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