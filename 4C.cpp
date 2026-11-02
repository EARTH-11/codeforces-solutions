#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  	
  	int n ;
  	cin >> n;
  	unordered_map<string,int >store;
  	while(n--){
  		string s;
  		cin>> s;
  		
  		if(store.find(s) == store.end()){
  			store[s] = 0;
  			cout << "OK" << "\n";
  		}else{
  			store[s]++;
  			string name = s + to_string(store[s]);
  			store[name] = 0;
  			cout << name << "\n";
  		}
  	}
   
    return 0;
}
