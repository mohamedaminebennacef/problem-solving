#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    if (n % 2 == 0) 
        cout << (n / 2 + 1) * (n / 2 + 1) << endl;    
    else
        cout << 2 * (n / 2 + 2) * (n / 2 + 1) << endl;
    return 0;
}