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
    for (auto &i : a) cin >> i;
    for (ll k = 0; k <= 60; k++) {
        ll g = 1LL << k;
        set<ll> s;
        for (int i = 0; i < n; i++)
            s.insert(a[i] % g);
        if (s.size() == 2) {
            cout << g << endl;
            return;  
        }
    }
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