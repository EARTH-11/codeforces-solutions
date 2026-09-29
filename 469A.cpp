#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> passed_levels;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        passed_levels.insert(level);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        passed_levels.insert(level);
    }

    if (passed_levels.size() == n) {
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n";
    }

    return 0;
}
