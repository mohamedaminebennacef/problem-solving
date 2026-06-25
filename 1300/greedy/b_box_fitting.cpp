#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(ll tc) {
   ll n, w;
   cin >> n >> w;
   vector<ll> a(n);
   map<ll, ll> cnt;
   for (ll i = 0; i < n; i++) {
       cin >> a[i];
       cnt[a[i]]++;
    }
    ll h = 1, currlw = w, used = 0;
    while (used != n) {
        ll last = -1;
        for (auto &[wi, f] : cnt) {
            if (wi <= currlw && f != 0) 
                last = wi;
        }
        if (last == -1) {
            currlw = w;
            h++;
        }
        else {
            currlw -= last;
            cnt[last]--;
            used++;
        }
    }
    cout << h << endl;    
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t; for (ll tc = 1; tc <= t; tc++) solve(tc);
    return 0;
}