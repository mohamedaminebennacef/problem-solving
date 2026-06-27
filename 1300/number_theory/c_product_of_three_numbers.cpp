#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
using ll = long long;
void solve() {
    ll n, a, b, c;
    cin >> n;
    ll n1 = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = i;
            n /= a; 
            break;
        }
    }
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0 && i != a) {
            b = i;
            n /= b;
            break;
        }
    }
    c = n;
    if (c != 1 && c != a && b != c && a != b && a * b * c == n1)
        cout << "YES" << endl << a << " " << b << " " << c << endl;
    else 
        cout << "NO" << endl;
}
int main() {
    ll t; cin >> t;
    while(t--)
        solve();
    return 0;
}