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
bool isVowel(char c) {
    static const set<char> vowels = {'a', 'e', 'i', 'o', 'u','y'};
    return vowels.count(tolower(c));
}
void solve()
{
    string s;
    cin>> s;
    transform(all(s), s.begin(), ::tolower);
    s.erase(remove_if(all(s), isVowel), s.end());
    string ans;
    for(int i = 0; i < s.size(); i++){
        ans += '.';
        ans += s[i];
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