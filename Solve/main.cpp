#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
bool multi = 1;
void solve() {
    ll n; cin >> n;
    ll nb = (n * (n - 1)) / 2, b[nb];
    for (int i = 0; i < nb; i++) cin >> b[i];
    sort(b, b + nb);
    for (int i = 0; i < nb; i += --n)
        cout << b[i] << " ";
    cout << b[nb - 1] << endl; 
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