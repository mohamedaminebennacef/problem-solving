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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
        cin >> a[i];
    if (is_sorted(all(a)))
            cout << 0 << endl;
    else if (a[n - 1] < 0 || a[n - 2] > a[n - 1])
        cout << -1 << endl;
    else {
        cout << n - 2 << endl;
        for (int i = 1; i <= n - 2; i++)
            cout << i << " " << n - 1 << " " << n << endl;
    }
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