#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>> n;
    int ans = 0;
    int note [] = {100, 20 , 20 ,5 ,1};
     for (int bill : note){
     	 ans += n/bill;
     	 n %= bill;
     }
      cout<< ans << endl;
    return 0;
}
