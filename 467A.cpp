#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p,q;
    cin >> n;
    int K = 0;
    for (int i = 0; i < n; i++) {  
        cin >> p >> q;
        if (q - p >= 2) {
         K++;
        }
    } 
    cout << K << endl;
    return 0;
}
