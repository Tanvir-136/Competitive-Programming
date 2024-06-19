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
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> cnt;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    ll sum = accumulate(all(a), 0ll);
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        sum -= a[i];
        --cnt[a[i]];
        if (sum % 2 == 0 && sum / 2 <= 1e6 && cnt[sum / 2] > 0) {
			ans.push_back(i);
		}
        sum += a[i];
        ++cnt[a[i]];
    }
    cout << ans.size() << nl;
    for (auto it : ans) {
        cout << it + 1 << " ";
    }
    cout << nl;
}
int main(){
    FAST_IO;
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}