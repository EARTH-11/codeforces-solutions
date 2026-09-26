#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    long long rem1 = n - (k - 1);
    if (rem1 > 0 && rem1 % 2 == 1) {
        cout << "YES\n";
        for (int i = 0; i < k - 1; ++i) {
            cout << 1 << " ";
        }
        cout << rem1 << "\n";
        return;
    }
    long long rem2 = n - 2 * (k - 1);
    if (rem2 > 0 && rem2 % 2 == 0) {
        cout << "YES\n";
        for (int i = 0; i < k - 1; ++i) {
            cout << 2 << " ";
        }
        cout << rem2 << "\n";
        return;
    }

    cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
