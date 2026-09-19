#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 4 ;
    int count = 0;
 vector <int> a(n);
 for (int i = 0 ; i<n;i++){
 	cin>> a[i];
 }
 sort(a.rbegin(), a.rend());
 for(int i =0; i<n-1;i++ ){
 	if (a[i] == a[i+1]){
 		count++;
 	}
 }
 cout << count  << endl;
    return 0;
}
