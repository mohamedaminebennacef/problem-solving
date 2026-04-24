#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n, m, ans = 0;
    cin >> n >> m;
    vector<vector<ll>> a(m,vector<ll>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[j][i];
    for (int i = 0; i < m; i++)
        sort(all(a[i]));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            ans += j * a[i][j] + (n - j - 1) * -a[i][j]; 
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    if(multi)
        cin >> t;
    while (t--) 
        solve();
    return 0;
}