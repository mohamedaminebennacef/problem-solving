#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1, -1);
    for (int i = 0; i < n; i++) cin >> a[i];
    n = unique(a.begin(), a.end()) - a.begin() - 1;
    ll ans = n;
    for (int i = 1; i < n - 1; i++) 
        if ((a[i - 1] < a[i] && a[i] < a[i + 1]) || (a[i - 1] > a[i] && a[i] > a[i + 1]))
            ans--;
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    if(multi) cin >> t;
    while (t--) solve();
    return 0;
}