#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int augmentedBfs(string src, string dest, map<string, vector<string>> &graph) {
        map<string, int> dist;
        queue<string> q;
        dist[src] = 0;
        q.push(src);

        while(!q.empty()) {
            string p = q.front();
            q.pop();

            for (auto child:graph[p]) {
                if (!dist.count(child) || dist[child] > dist[p] + 1) {
                    dist[child] = dist[p] + 1;
                    q.push(child);
                }
            }
        }

        return dist.count(dest) ? dist[dest] + 1 : 0;
    }

    bool good(string s1, string s2) {
        int diff = 0;
        int n = s1.size();

        for (int i=0 ; i<n ; i++) {
            diff += s1[i] != s2[i];
        }

        return diff == 1;
    }

    int ladderLength(string src, string dest, vector<string>& v) {
        map<string, vector<string>> graph;

        v.push_back(src);
        int n = v.size();
        for (int i=0 ; i<n ; i++) {
            for (int j=i+1 ; j<n ; j++) {
                if (!good(v[i], v[j])) continue;
                graph[v[i]].push_back(v[j]);
                graph[v[j]].push_back(v[i]);
            }
        }

        return augmentedBfs(src, dest, graph);
    }
};

int main() {
    string beginWord="hit",endWord="cog";
    vector<string> wordList = {"hot","dot","dog","lot","log","cog"};
    Solution solution;
    cout << solution.ladderLength(beginWord,endWord,wordList);
   
}