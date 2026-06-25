#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
   ll n, x, m, l, r;
   cin >> n >> x >> m;
   ll L = x, R = x;
   while (m--) {
    cin >> l >> r;
    if (!(r < L || l > R)) {
        L = min(l,L);
        R = max(r,R);
    }
   }
   cout << R - L + 1 << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll t; cin >> t; while (t--) solve();
    return 0;
}