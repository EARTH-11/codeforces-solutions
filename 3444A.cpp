#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string previous_magnet, current;
    cin >> previous_magnet;
    int groups = 1;
    for (int i = 1; i < n; ++i) {
        cin >> current;
        if (current != previous_magnet) {
            groups++;
            previous_magnet = current;
        }
    }
    cout << groups << endl;
    return 0;
}
