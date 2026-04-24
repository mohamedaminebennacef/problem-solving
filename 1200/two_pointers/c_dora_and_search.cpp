#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto & i : a) cin >> i;
    ll l = 0, r = n - 1, mn = 1, mx = n;
    while (l < r) {
        if (a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx) {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
        if (a[l] == mn) {
            l++;
            mn++;
        }
        if (a[l] == mx) {
            l++;
            mx--;
        }
        if (a[r] == mn) {
            r--;
            mn++;
        }
        if (a[r] == mx) {
            r--;
            mx--;
        }
    }
    cout << -1 << endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    if(multi)
        cin >> t;
    while (t--) 
        solve();
    return 0;
}