#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll dp[1001][1001];
ll knapsack(ll n, ll w, vector<ll>& val, vector<ll>& wt) {
    for (ll i = 0; i <= n; i++) {
        for (ll j = 0; j <= w; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else {
                if (wt[i - 1] <= j)
                    dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
                else
                   dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][w];
}
void solve(ll tc) {
    ll n, W;
    cin >> n >> W;
    memset(dp, -1, sizeof(dp));
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