#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers = {
    	4,7,
    	44,77,47,74,
    	444,777,474,477,744,447,747,774
    }; 
    for (int lucky : numbers){
    	if (n %lucky == 0){
    		cout<<"YES"<<endl;
    		return 0;
    	}
    }
    cout<<"NO"<<endl;
    return 0;
}
