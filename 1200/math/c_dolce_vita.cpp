#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define F first 
#define S second
#define pb push_back
using ll = long long;
#define all(a) a.begin(), a.end()
using namespace std;
void solve() {
    ll n, x, s = 0, ans = 0, currDays, prevDays = 0;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    sort(all(a));
    for (int nbpacks = n - 1; nbpacks >= 0; nbpacks--) {
        if (s > x) {
            s -= a[nbpacks];
            continue;
        }
        currDays = (x - s) / (nbpacks + 1);
        ans += (currDays - prevDays) * (nbpacks + 1) + 1;
        prevDays = currDays;
        s -= a[nbpacks];
    }
    cout << ans << endl;
}
int main() {
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}