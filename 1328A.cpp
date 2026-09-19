#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int c,k;
 for (int i = 0 ; i<n;i++){
 	cin>> c >> k;
 	
 	int mod = c%k ;
 	if (mod !=0){
 	cout<< k - mod<< endl;
 	}else if (c < k){
 		cout<<k-c<<endl;
 	}
 	else if(mod == 0){
 		cout<<mod<<endl;
 	}
 	
 }
    return 0;
}
