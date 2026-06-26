#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
using ll = long long;
void solve() {
    ll n, p = 0, s = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
        cin >> a[i];
    for (ll i = 0; i < n ; i++) {
        p += a[i];
        s += a[n - i - 1];
        if (p <= 0 || s <= 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main() {
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll t; cin >> t;
    while(t--)
        solve();
    return 0;
}