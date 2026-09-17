#include <bits/stdc++.h>

using namespace std;

int main() {
 int n;
    cin >> n;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; ++i) {
        int recipient;
        cin >> recipient;
        ans[recipient] = i;
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}
