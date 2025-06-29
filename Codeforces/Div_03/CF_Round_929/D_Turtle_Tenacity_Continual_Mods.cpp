// D. Turtle Tenacity: Continual Mods
// Author: Md.Tanvir Islam
// Date:28-02-24
//---------------------------------------------------------------//
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define nl '\n'
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    if (a[0] != a[1])
    {
        yes;
        return;
    }
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] % a[0] != 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        yes;
    else
        no;
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