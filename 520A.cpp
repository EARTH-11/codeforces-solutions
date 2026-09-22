#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int n;
    if (!(cin >> n) || n < 26) {
        cout << "NO\n";
        return 0;
    }
    string s;
    cin >> s;
    vector<bool> seen(26, false);
    int unique_letters = 0;
    
    for (char c : s) {
       char lower_c = tolower(c);
       int index = lower_c - 'a';
      if (!seen[index]) {
         seen[index] = true;
        unique_letters++;
     }
    if (lower_c >= 'a' && lower_c <= 'z') {
        seen[lower_c - 'a'] = true;
       }  
    }
    if (unique_letters == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
