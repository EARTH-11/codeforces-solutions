#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    while (n--) {
        int c, k;
        cin >> c >> k;
        int mod = c % k;
        if (mod == 0) {
            cout << 0 << '\n';
        } else {
            cout << k - mod << '\n';
        }
    }
    return 0;
}
