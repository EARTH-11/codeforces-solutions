#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin,s);
    
    set <char> letters;
    for (int c : s){
    	if(islower(c)){
    	    letters.insert(c);
    	}
    }
    
    cout << letters.size() << "\n";

    return 0;
}
