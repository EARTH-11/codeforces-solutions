#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double y;
        cin >> y;
        sum += y;
    }
    
    cout << fixed << setprecision(12) << sum / n << endl;
    return 0;
}
