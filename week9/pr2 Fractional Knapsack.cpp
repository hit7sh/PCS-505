#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n;
  cin >> n;
  vector<int> w(n), v(n);
  vector<double> value1(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    value1[i] = double(v[i]) / w[i];
  }

  vector<int> order(n);
  for (int i = 0; i < n; i++) {
    order[i] = i;
  }

  sort(order.begin(), order.end(), [&](int i, int j) {
    return value1[i] > value1[j];
  });

  int W;
  cin >> W;
  vector<pair<int, int>> ans;
  double mxv = 0;
  for (int i : order) {
    if (W <= 0) break;
    int take = min(W, w[i]);
    ans.push_back(make_pair(i + 1, take));
    mxv += value1[i] * take;
    W -= take;
  }

  cout << "Maximum weight = " << mxv << '\n';
  for (auto [item, weight] : ans) {
    cout << item << "-" << weight << '\n';
  }

  return 0;
}
