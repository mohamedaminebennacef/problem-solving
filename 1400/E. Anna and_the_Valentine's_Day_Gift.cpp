#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
using ll = long long;
void solve() {
    ll n, m, td = 0;
    cin >> n >> m;
    string s;
    vector<ll> d;
    for (ll i = 0; i < n; i++) {
        cin >> s;
        td += s.length();
        ll d1 = 0;
        for (ll j = s.length() - 1; j >= 0; j--) {
            if (s[j] == '0')
                d1++;
            else
                break;
        }
        if (d1 != 0)
            d.push_back(d1);
    }
    sort(all(d), greater<ll>());
    for (ll i = 0; i < d.size(); i++) 
        if (i % 2 == 0)
            td -= d[i];
    cout << (td > m ? "Sasha" : "Anna") << endl;
}
int main() {
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    solve();
    return 0;
}