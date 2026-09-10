#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
 string word ="hello";
 int hello_pos = 0;
 for (char c : s ){
 	if (c == word[hello_pos]){
 		hello_pos++;
 	if(hello_pos == word.length()) break;
 	}
 }
if(hello_pos == word.length()){
	cout<<"YES"<<endl;
}else{
	cout<<"NO"<<endl;
}
    return 0;
}
