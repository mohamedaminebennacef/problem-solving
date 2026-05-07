#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define pb push_back
using ll = long long;
#define all(a) a.begin(), a.end()
using namespace std;
void solve() {
    ll n, q, s = 0, t, i, x;
    cin >> n >> q;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> x;
        a[i] = {x, 0};
        s += a[i].F;
    }
    pair<ll, ll> type2val = {0, 0};
    for (ll j = 1; j <= q; j++) {
        cin >> t;
        if (t == 1) {
            cin >> i >> x;
            if (type2val.S > a[i - 1].S) 
                s += x - type2val.F;
            else
                s += x - a[i - 1].F;
            a[i - 1] = {x, j};
            cout << s << endl;
        }
        else {
            cin >> x;
            type2val = {x, j};
            s = n * x;
            cout << s << endl;
        }
    }
}
int main() {
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    solve();
    return 0;
}