#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t;
    cin >> t;
   for(int c : t){
   	if ( c == 'H' || c == 'Q' || c == '9'){
   		cout<< "YES"<<endl;
   		return 0;
   	}
   }
  cout<< "NO"<<endl;
    return 0;
}
