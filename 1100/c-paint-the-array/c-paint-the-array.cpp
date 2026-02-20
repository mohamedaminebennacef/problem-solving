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

    vector<int> pair, impair;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            pair.pb(a[i]);
        else
            impair.pb(a[i]);
    }
    int gcdpair = 0, gcdimpair = 0;
    for (int i = 0; i < pair.size(); i++)
        gcdpair = __gcd(gcdpair, pair[i]);
    for (int i = 0; i < impair.size(); i++)
        gcdimpair = __gcd(gcdimpair, impair[i]);

    bool t = 0;
    for (int i = 0; i < impair.size(); i++)
    {
        if (impair[i] % gcdpair == 0)
        {
            t = 1;
            break;
        }
    }
    if (t == 0)
    {
        cout << gcdpair << endl;
        return;
    }
    else
    {
        bool t1 = 0;
        for (int i = 0; i < pair.size(); i++)
        {
            if (pair[i] % gcdimpair == 0)
            {
                t1 = 1;
                break;
            }
        }
        if (t1 == 0)
        {
            cout << gcdimpair << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
            return;
        }
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