#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n, k, ans = LLONG_MAX;
    cin >> n >> k;
    vector<ll> a(n + 1), l(k + 1, 0), mx1(k + 1, LLONG_MIN), mx2(k + 1, LLONG_MIN);
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        ll c = a[i], step = i - l[c] - 1;
        if (step > mx1[c]) {
            mx2[c] = mx1[c];
            mx1[c] = step;
        }
        else if (step > mx2[c])
            mx2[c] = step;
        l[c] = i;
    }
    for (int i = 1; i <= k; i++) {
        ll step = n - l[i];
        if (step > mx1[i]) {
            mx2[i] = mx1[i];
            mx1[i] = step;
        }
        else if (step > mx2[i])
            mx2[i] = step;
    }
    for (int i = 1; i <= k; i++) 
        ans = min(ans, max(mx1[i] / 2, mx2[i]));
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