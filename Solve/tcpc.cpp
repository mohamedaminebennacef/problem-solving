#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"

bool multi = false;

void solve(int tc)
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    if (k >= count(all(s), '1'))
    {
        cout << 1e18 << endl;
        return;
    }
    if (k == 0)
    {
        if (s[0] == '1')
        {
            cout << 10 << endl;
            return;
        }
    }
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == '1')
            k--;
    }
    vector<int> seq0;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            cnt++;
        else
        {
            seq0.pb(cnt);
            cnt = 0;
        }
    }
    sort(all(seq0));
    cout << (seq0[k] + 1) * 10 << endl;
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
    while (t--)
        solve(t);
    return 0;
}