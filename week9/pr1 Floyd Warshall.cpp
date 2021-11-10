#include<iostream>
using namespace std;

const int INF = 1e9;

int main() {
  string w;
  int n;
  cin >> n;
  int adj[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> w;
      if (w == "INF") {
        adj[i][j] = INF;
      } else {
        adj[i][j] = stoi(w);
      }
    }
  }

  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
      }
    }
  }

  cout << "Shortest Distance Matrix: \n";

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (adj[i][j] >= INF) cout << "INF ";
      else cout << adj[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
