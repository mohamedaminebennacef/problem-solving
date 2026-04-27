#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n, query, q;
    cin >> n >> query;
    vector<ll> h(n), pre(n), mxstep(n,LLONG_MIN);
    for (int i = 0; i < n; i++) 
        cin >> h[i];
    pre[0] = h[0];
    mxstep[0] = h[0];
    for (int i = 1; i < n; i++) {
        pre[i] += pre[i - 1] + h[i];
        mxstep[i] = max(mxstep[i - 1], h[i]);
    }
    while (query--) {
        cin >> q;
        ll idx = upper_bound(all(mxstep), q) - mxstep.begin() - 1;
        cout << (idx != -1 ? pre[idx] : 0) << " ";
    }
    cout << endl;
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