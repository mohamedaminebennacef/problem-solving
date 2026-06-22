#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll n;
    cin >> n;
    ll k = 2;
    while (k <= sqrt(n)) {
        if (n % k == 0) 
            break;
        else
            k++;
    }
    if (k > sqrt(n))
        cout << 1 << " " << n - 1 << endl;
    else
        cout << n / k << " " << n - n / k << endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ll t; cin >> t; while (t--) solve();
    return 0;
}