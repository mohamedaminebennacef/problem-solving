#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define ll long long
#define S second
#define F first
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define sz(a) (int(a.size()))

bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> st;
        st.push(0);
        set<int> s={0};
        int tmp=0;
        while (!st.empty()) {
            tmp = st.top();
            st.pop();
            for(int i = 0; i<rooms[tmp].size();i++) {
                if (s.find(rooms[tmp][i]) == s.end()) {
                    s.insert(rooms[tmp][i]);
                    st.push(rooms[tmp][i]);
                }
            }
        }
    return s.size() == rooms.size();
}

void solve() {
    vector<vector<int>> rooms = {{1,3},{3,0,1},{2},{0}};
    cout<<canVisitAllRooms(rooms)<<endl;
    
}
int main() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}