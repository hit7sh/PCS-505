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
        sort(A, A + n);
        int k;
        cin >> k;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (binary_search(A, A + n, A[i] + k))
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
