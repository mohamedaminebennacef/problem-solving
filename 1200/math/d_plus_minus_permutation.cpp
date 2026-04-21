#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second 
#define all(a) a.begin(), a.end()
using ll = long long;

using namespace std;

bool multi = 1;

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    ll ppcm = (x * y) / (__gcd(x, y)),
       cidx = n / ppcm,
       r = n / x - cidx,
       g = n / y - cidx,
       l = n - r + 1,
       sr = ((l + n) * (n - l + 1)) / 2,
       sg = (g * (g + 1)) / 2;
    cout << sr - sg << endl;


    // while (i != j) {
    //     if (c % x == 0 && c % y != 0) {
    //         score += j;
    //         // cout << j << " ";
    //         j--;       
    //     }
    //     else if (c % x != 0 && c % y == 0) {
    //         score -= i;
    //         // cout << i << " ";
    //         i++;
    //     }
    //     else {
    //         // cout << i << " ";
    //         j--;
    //     }
    //     c++; 
    // }
    // while (x <=n) {
    //     if (x % y1 != 0) {
    //         score += j;
    //         j--;            
    //     }
    //     x += x1;
    // }
    // while (y <=n) {
    //     if (y % x1 != 0) {
    //         score -= i;
    //         i++;
    //     }
    //     y += y1;
    // }
    // cout << score << endl;
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