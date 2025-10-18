#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        long long minOdd = LLONG_MAX;
        int oddCount = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 1) {
                oddCount++;
                minOdd = min(minOdd, a[i]);
            }
        }

        if (oddCount == 0) {
            cout << 0 << "\n";
        } else if (oddCount % 2 == 1) {
            cout << sum << "\n";
        } else {
            cout << sum - minOdd << "\n";
        }
    }
    return 0;
}
