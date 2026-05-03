#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve (ll tc) {
    ll n, m, notinfected= 0, day = 0;
    cin >> n >> m;
    vector<ll> a(m), v(m);
    for (ll i = 0; i < m; i++) 
        cin >> a[i];
    sort(all(a));
    for (ll i = 0; i < m - 1; i++) 
        v[i] = a[i + 1] - a[i]  - 1;
    v[m - 1] = n + a[0] - a[m - 1] - 1;
    sort(all(v), greater<ll>()); 
     for (ll i = 0; i < m; i++) {
        ll currgap = v[i] - 2 * day; 
        if (currgap > 0) {
            notinfected++;
            currgap -= 2;
            if (currgap > 0)
                notinfected += currgap;
        } 
        day += 2; 
    }
    cout << n - notinfected << endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t = 1;
    if(multi)
        cin >> t;
    for (ll tc = 1; tc <= t; tc++) 
        solve(tc);
    return 0;
}   