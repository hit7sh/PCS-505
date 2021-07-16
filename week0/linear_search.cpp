#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    
    for (int& x : A) {
        cin >> x;
    }
    int cnt = 0;
    bool found = false;

    for (int i = 0; i < n; i++) {
        cnt++;
        if (A[i] == k) {
            found = true;
            break;
        }
    }

    cout << "Total comparisons = " << cnt << ", ";
    if (found) {
        cout << "Number found!" << '\n';
    } else {
        cout << "Number does not exist!" << '\n';
    }
  }
  return 0;
}
