#include <bits/stdc++.h>
using namespace std;
signed main() {
    freopen("../input.txt","r",stdin);
    int n,t;string s;
    cin>>n>>t>>s;
    while(t--) {
        for(int i=0;i<n-1;i+=1) {
            if(s[i]=='B'&& s[i+1]=='G') {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
    // GBGGB
}