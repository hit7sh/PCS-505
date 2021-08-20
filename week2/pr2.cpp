#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (binary_search(A, A + n, A[i] + A[j])) {
                    int where = lower_bound(A, A + n, A[i] + A[j]) - A;
                    cout << i + 1 << ' ' << j + 1 << ' '<< where << '\n';
                    goto done;
                }
            }
        }
        cout << "No sequence found!\n";
        done:;
    }
    return 0;
}
