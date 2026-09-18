#include <bits/stdc++.h>

using namespace std;

int main() {
 int n;
    cin >> n;
   int total = 0;
   int mine =0; int coins = 0;
 
 vector <int> a(n);
 for( int i = 0 ; i < n ; ++i){
 	cin >>a[i];
 	total+=a[i];
 }
 sort(a.rbegin(), a.rend());
 
 for(int i = 0; i < n ;++i){
 	mine += a[i];
 	coins ++;
 	if (mine > total - mine ){
 		break;
 	}
 }
 cout << coins <<endl;
    return 0;
}
