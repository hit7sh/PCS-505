#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n, x;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  
  for (int i = 0; i < n; i++) {
    cin >> x;
    pq.push(x);
  }

  int ans = 0;
  while (pq.size() > 1) {
    int f = pq.top(); pq.pop();
    int s = pq.top(); pq.pop();
    // cout << f << " " << s << '\n';
    // if (pq.size()) cout << pq.top() << '\n';
    ans += f + s;
    pq.push(f + s);
  }

  cout << ans;
  return 0;
}
