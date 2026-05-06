#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define pb push_back
using ll = long long;
#define all(a) a.begin(), a.end()
using namespace std;
void solve() {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (s > count(all(a),1)) {
        cout << -1 << endl;
        return;
    }
    ll l = 0, currsum = 0, ans = 0;
    for (ll r = 0; r < n; r++) {
        currsum += a[r];
        if (currsum == s) 
            ans = max(ans, r - l + 1);
        while (l < r && currsum > s) {
            currsum -= a[l];
            l++;
        }
    }
    cout << n - ans << endl;
}
int main() {
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}