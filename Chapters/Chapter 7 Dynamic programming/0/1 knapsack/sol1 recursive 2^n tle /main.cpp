#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll knapsack(ll n, ll W, vector<ll>& val, vector<ll>& wt) {
    if (W == 0 || n == 0)
        return 0;
    if (wt[n - 1] <= W)
        return max(val[n - 1] + knapsack(n - 1, W - wt[n - 1], val, wt), knapsack(n - 1, W, val, wt));
    else
        return knapsack(n - 1, W, val, wt);
}
void solve(ll tc) {
    ll n, W;
    cin >> n >> W;
    vector<ll> val(n), wt(n);
    for (ll i = 0; i < n; i++)
        cin >> val[i];
    for (ll i = 0; i < n; i++)
        cin >> wt[i];
    cout << knapsack(n, W, val, wt) << endl;
}
int main() {
    freopen("../input.txt", "r", stdin); freopen("../output.txt", "w", stdout);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    for (ll tc = 1; tc <= t; tc++)
        solve(tc);
    return 0;
}