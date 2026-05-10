#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define F first 
#define S second
#define pb push_back
using ll = long long;
#define all(a) a.begin(), a.end()
using namespace std;

void solve() {
    
    ll n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;

    ll ccnt = count(all(s), c);
    if (ccnt  == n) {
        cout << 0 << endl;
        return;
    } 
    s = '#' + s;
    for (ll x = 2; x <= n; x++) {
        ll i = x, t = 1;
        while (i <= n) {
            if (s[i] != c)
                t = 0;
            i += x;
        }
        if (t) {
            cout << 1 << endl << x << endl;
            return;
        }
    }
    cout << 2 << endl << n - 1 << " " << n << endl;
}
int main() {
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    for (ll tc = 1; tc <= t; tc++) {
        solve();
    } 
    return 0;
}