#include <iostream>

using namespace std;

int main(){
	/* Memory allocation for the following is 8kb */
	int n, k;
	cin >> n >> k;
	int a[n], c=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i] >= a[k-1] && a[i]>0){
			c++;
		}
	}
	cout << c << endl;
	return 0;
	
	/* Memory allocation for the following is 21kb */
	//int a;
	//for(int i=0; i<k; ++i){
	//	cin >> a;
	//	if(a==0){cout << i << endl; return 0;}
	//}
	//int b;
	//for(int i=k; i<n; ++i){
	//	cin >> b;
	//	if(a!=b){cout << i << endl; return 0;}
	//}
	//cout << n << endl;
}
