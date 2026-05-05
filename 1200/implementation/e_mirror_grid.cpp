#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lb lower_bound
#define ub upper_boundf
using namespace std;
char a[100][100];
void solve() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int zeros = (a[i][j] - '0' == 0) + (a[j][n - 1 - i] - '0' == 0) + (a[n - 1 - i][n - 1 - j] - '0' == 0) + (a[n - 1 - j][i] - '0' == 0);
            ans += min(zeros, 4 - zeros);
        }
    }
    cout << ans / 4 << endl;
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