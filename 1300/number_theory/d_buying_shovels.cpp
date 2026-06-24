#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
   ll n, k, ans = LLONG_MAX;
   cin >> n >> k;
   for (ll x = 1; x * x <= n ; x++) {
       if (n % x == 0) {
        if (x <= k)
            ans = min(ans, n / x);
        if (n / x <= k)
            ans = min(ans, x);
       }
   }
   cout << ans << endl;
}
int main() {
    ll t; cin >> t;
    while(t--)
        solve();
    return 0;
}