// B. Two-gram (https://codeforces.com/problemset/problem/977/B)
// Author: Md.Tanvir Islam
// Date: 23-11-23
//---------------------------------------------------------------//
#include<iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
//---------------------------------------------------------------//
void solve()
{
    int n; cin >> n;
	string s; cin >> s;
	int res = 0;
	string ans;
	for (int i = 0; i < n - 1; ++i) {
		int cur = 0;
		for (int j = 0; j < n - 1; ++j)
			if (s[j] == s[i] and s[j + 1] == s[i + 1])
				++cur;
		if (res < cur) {
			res = cur;
			ans = string(1, s[i]) + string(1, s[i + 1]); //Constructs a string by concatenating two characters from string s at positions i and i+1
		}
	}
	cout << ans << endl;
}
int main(){
    FAST_IO;
    //Start Here
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}