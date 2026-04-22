#include <bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define all(a) a.begin(), a.end()
using namespace std;
using ll = long long;
ll multi = 1;
void solve(ll tc) {
    ll n, x, nb = 0, ans = 0;
    cin >> n;
    vector<pair<ll,ll>> a(n), b(n), c(n), res;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[i] = {x, i};
    }
    for (int i = 0; i < n; i++) {
        cin >> x;
        b[i] = {x, i};
    }
    for (int i = 0; i < n; i++) {
        cin >> x;
        c[i] = {x, i};
    }
    auto compare = [&] (pair<ll,ll> p1, pair<ll,ll> p2) {
        return p1.F > p2.F;
    };
    sort(all(a),compare);
    sort(all(b),compare);
    sort(all(c),compare);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                set<ll> s = {a[i].S,b[j].S,c[k].S};
                if (s.size() == 3)
                    ans = max(ans, a[i].F + b[j].F + c[k].F);
            }
        }
    }
    cout << ans << endl;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t = 1;
    if (multi)
        cin >> t;
    for (ll tc = 1; tc <= t; tc++)
        solve(tc);
    return 0;
}