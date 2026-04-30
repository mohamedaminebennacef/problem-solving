#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n, ans = 0;
    cin >> n;
    vector<ll> x(n), y(n), d(n);
    for (ll i = 0; i < n; i++) cin >> x[i];
    for (ll i = 0; i < n; i++) cin >> y[i];
    for (ll i = 0; i < n; i++) d[i] = y[i] - x[i];
    sort(all(d), greater<int>());
    ll l = 0, r = n - 1;
    while (l < r) {
        if (d[l] + d[r] >= 0) {
            l++;
            ans++;
        }
        r--;
    }
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