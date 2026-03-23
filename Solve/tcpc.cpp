#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"

bool multi = true;

void solve(ll tc)
{
    ll n, k, d = 0, ans = 0;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<ll, ll>> a2 = {{1, 0}, {a[0], 0}};
    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
            d++;
        a2.pb({a[i], d});
    }
    for (ll i = 0; i < n - k; i++)
        ans = max(ans, a2[i + k + 1].F + a2[i + k + 1].S * 24 - (a2[i].F + a2[i].S * 24));
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t = 1;
    if (multi)
        cin >> t;
    while (t--)
        solve(t);
    return 0;
}
