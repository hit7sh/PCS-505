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
        int k;
        cin >> k;
        int quantity = upper_bound(A, A + n, k) - lower_bound(A, A + n, k);
        if (quantity == 0) cout << "Key not present\n";
        else cout << k << " - " << quantity << '\n';
    }
    return 0;
}
