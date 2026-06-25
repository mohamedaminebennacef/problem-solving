#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
using ll = long long;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), ans;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 1; i < n - 1; i++) 
        if (!((a[i] > a[i - 1] && a[i] < a[i + 1]) || (a[i] < a[i - 1] && a[i] > a[i + 1])))
            ans.push_back(a[i]);
    cout << ans.size() + 2 << endl << a[0] << " ";
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << a[n - 1] << endl;
}
int main() {
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    ll t; cin >> t;
    while(t--)
        solve();
    return 0;
}