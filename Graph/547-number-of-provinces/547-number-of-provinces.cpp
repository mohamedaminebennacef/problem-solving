#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define ll long long
#define S second
#define F first
#define mp make_pair
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define sz(a) (int(a.size()))



void dfs(int s,vector<vector<int>>& adj,vector<int>& v) {
    if (v[s]) return;
    v[s] = 1;
    for(int i= 0;i<adj[s].size();i++) {
        if (adj[s][i]) {
            dfs(i,adj,v);
        }
    }
}
void solve(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> v(n,0);
    int nbc = 0;
    for(int s=0;s<n;s++) {
        if (!v[s]) {
            nbc++;
            dfs(s,adj,v);
        }
    }
    cout<<nbc<<endl;
}


int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t = 1;
    // cin >> t;
    vector<vector<int>> adj =  {{1,0,0,1},{0,1,1,0},{0,1,1,1},{1,0,1,1}};
    while (t--)
        solve(adj);
    return 0;
}