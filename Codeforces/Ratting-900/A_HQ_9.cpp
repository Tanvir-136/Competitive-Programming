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
    bool found = false;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            found = true;
            break;
        }
    }
    if(!found){
        no;
    }else{
        yes;
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