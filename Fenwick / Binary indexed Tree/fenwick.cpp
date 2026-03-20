#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define em emplace_back
#define mp make_pair
#define sz(a) (int)(a.size())
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
#define endl "\n"

bool multi = false;
int a[11] = {3, 2, -1, 6, 5, 4, -3, 3, 7, 2, 3};
int tree[12];


void update(int pos,int val) {

}   
ll query(int pos) {

}
ll getSum(int l,int r)
{
    return query(r) - query(l - 1);
}





void solve(int tc)
{

}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    if (multi)
        cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}