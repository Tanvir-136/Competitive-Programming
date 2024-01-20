// A. Showstopper
// Author: Md.Tanvir Islam
// Date:09-01-24
//---------------------------------------------------------------//
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            swap(a[i],b[i]);
        }
    }

    int mx_a = *max_element(a.begin(),a.end());
    int mx_b = *max_element(b.begin(),b.end());

    if(mx_a == a[n-1] && mx_b == b[n-1]){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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