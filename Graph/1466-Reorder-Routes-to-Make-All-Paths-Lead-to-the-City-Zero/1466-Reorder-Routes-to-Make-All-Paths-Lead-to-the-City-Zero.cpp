#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sz(a) int(a.size())
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>

void dfs(const pii parent, const pii child, const vector<vector<pii>> &adj, vi &visited, int &cnt)
{
    if (visited[child.f])
        return;
    if (child.s == 0)
        cnt++;
    visited[child.f] = 1;
    for (auto node : adj[child.f])
    {
        dfs(child, node, adj, visited, cnt);
    }
}

int minReorder(int n, vector<vi> &c)
{
    int cnt = 0;

    int orig = n;
    for (int i = 0; i < orig; i++)
        c.pb({c[i][1], c[i][0]});

    vector<vector<pii>> adj(n + 1);
    for (int i = 0; i < sz(c); i++)
    {
        if (i < sz(c) / 2)
            adj[c[i][0]].pb({c[i][1], 0});
        else
            adj[c[i][0]].pb({c[i][1], 1});
    }

    vi visited(n + 1);
    pii node1 = {-1, 1};
    pii node2 = {0, 1};
    dfs(node1, node2, adj, visited, cnt);

    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    vector<vi> c(n, vi(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> c[i][j];
    }
    cout << minReorder(n, c) << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}