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

bool multi = false;

float distance(int x1, int y1, int x2, int y2)
{
    return (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}

void solve(int tc)
{
    // vector<vector<int>> points = {{1, 3}, {3, 3}, {5, 3}, {2, 2}};
    // vector<vector<int>> queries = {{2, 3, 1}, {4, 3, 1}, {1, 1, 2}};
    vector<vector<int>> points = {{1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}};
    vector<vector<int>> queries = {{1, 2, 2}, {2, 2, 2}, {4, 3, 2}, {4, 3, 3}};
    vector<int> res;
    for (int i = 0; i < queries.size(); i++)
    {
        int xc = queries[i][0];
        int yc = queries[i][1];
        int rc = queries[i][2];
        int nbpointscircle = 0;
        for (int j = 0; j < points.size(); j++)
        {
            int x = points[j][0];
            int y = points[j][1];
            if (distance(x, y, xc, yc) <= rc)
                nbpointscircle++;
        }
        res.push_back(nbpointscircle);
    }
    for (int i : res)
        cout << i << " ";
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    if (multi)
        cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    return 0;
}