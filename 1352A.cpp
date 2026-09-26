#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> ans;
    int place = 1;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            ans.push_back(digit * place);
        }
        n /= 10;
        place *= 10;
    }
    
    cout << ans.size() << "\n";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << "\n";
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
