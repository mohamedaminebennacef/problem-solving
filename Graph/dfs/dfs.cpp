#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define ll long long
#define S second
#define F first
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define sz(a) (int(a.size()))

vector<int> adj[6] = {
    {},
    {2,4},
    {1,3,5},
    {2,5},
    {1},
    {2,3}
};
bool visited[6] = {false,false,false,false,false,false};

void dfs(int s) {
    if (visited[s]) return;
    visited[s] = true;
    cout<<s<<endl;
    // process node s
    for (auto u: adj[s]) {
        dfs(u);
    }
}

void solve() {
    dfs(1);
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}