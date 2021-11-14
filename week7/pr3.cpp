#include<bits/stdc++.h>
using namespace std;


void dfs(int u, int p, vector<vector<pair<int, int>>>& adj, int dest, int len, int lev, int cur, int& ans) {

  if (lev == len) ans = min(ans, cur);
  if (lev > len) return;

  for (auto x : adj[u]) {
    int v = x.first, wt = x.second;
    if (v != p) {
      dfs(v, u, adj, dest, len, 1 + lev, cur + wt, ans);
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> adj(n);
  int wt;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> wt;
      if (wt > 0) {
        adj[i].push_back(make_pair(j, wt));
      }
    }
  }
  int src, dest, len;
  cin >> src >> dest >> len;
  --src; --dest;

  const int INF = 1e9;
  int level = 0, ans = INF;

  dfs(src, -1, adj, dest, len, 0, 0, ans);

  if (ans == INF) {
    cout << "No path of length " << len << " is available";
  } else {
    cout << "Weight of shortest path from (" << src + 1 << ", " << dest + 1 << " with " << len << " edges: " << ans;
  }
  return 0;
}
