#include <bits/stdc++.h>
#define F first
#define S second
#define all(a) a.begin(), a.end()
using namespace std;
using ll = long long;

int main() {
    for (int i = 1;i <= 8; i++)
        cout << i << " " << (i * (i - 1)) / 2 << endl;
    return 0;
}