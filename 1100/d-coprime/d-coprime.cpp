#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"
// int a[500005];
#define int long long

bool multi = true;

void solve(int tc)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int gcd = a[0];
    for (int i = 1; i < n; i++)
        gcd = __gcd(gcd, a[i]);
    if (a[n - 1] == 1)
    {
        cout << n * 2 << endl;
        return;
    }
    if (gcd != 1)
        cout << -1 << endl;
    else
    {
        map<int, int> m;
        for (int i = 0; i < n; i++)
            m[a[i]] = i + 1;
        int ans = -1;
        for (auto e : m)
        {
            int v = e.first;
            int idx = e.second;
            for (auto e1 : m)
            {
                int v1 = e1.first;
                int idx2 = e1.second;
                if (__gcd(v , v1) == 1)
                    ans = max(ans , idx + idx2);
            }
        }
        cout << ans << endl;
    }
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

    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}