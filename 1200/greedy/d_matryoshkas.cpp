#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n, ans = 0; cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto e : mp) 
        ans += max(0LL,e.S - mp[e.F - 1]);
    cout << ans << endl;    
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    if(multi)
        cin >> t;
    while (t--) 
        solve();
    return 0;
}