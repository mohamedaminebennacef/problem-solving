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

unordered_map<string, vector<pair<string, double>>> g;

bool dfs(string curr, string target, unordered_set<string> &visited, double &result, double currVal)
{
    if (curr == target)
    {
        result = currVal;
        return true;
    }
    visited.insert(curr);
    for (auto &[next, val] : g[curr])
    {
        if (!visited.count(next))
        {
            if (dfs(next, target, visited, result, currVal * val))
            {
                return true;
            }
        }
    }
    return false;
}

vector<double> calcEquation(vector<vector<string>> &eq, vector<double> &v, vector<vector<string>> &q, int n, int qu)
{
    set<string> s;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            s.insert(eq[i][j]);

    for (int i = 0; i < n; i++)
    {
        g[eq[i][0]].pb({eq[i][1], v[i]});
        g[eq[i][1]].pb({eq[i][0], 1 / v[i]});
    }
    vector<double> ans;
    for (int i = 0; i < qu; i++)
    {
        if (s.find(q[i][0]) == s.end() || s.find(q[i][1]) == s.end())
            ans.pb(-1);
        else if (q[i][0] == q[i][1])
            ans.pb(1);
        else
        {
            unordered_set<string> visited;
            double result = -1;
            string start = q[i][0], end = q[i][1];
            dfs(start, end, visited, result, 1);
            ans.pb(result);
        }
    }
    return ans;
}

void solve(int tc)
{
    int n, qu;
    cin >> n >> qu;
    vector<vector<string>> eq(n, vector<string>(2));
    vector<double> v(n);
    vector<vector<string>> q(qu, vector<string>(2));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> eq[i][j];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < qu; i++)
        for (int j = 0; j < 2; j++)
            cin >> q[i][j];
    vector<double> ans = calcEquation(eq, v, q, n, qu);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

bool multi = true;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve(i);
    }
    return 0;
}