#include <iostream>

using namespace std;

int main(){
	int i=5, x, y, c=0, v=0, t=0;
	int arr[5][5];
	while(i--){
		int j=5;
		while(j--){
			cin >> arr[i][j];
			if(arr[i][j]==1){x=i; y=j;}
		}
	}
	if(x<2){
		v = 2-x;
		if(y<2){
			t = 2-y;
		}else{
			t = y-2;
		}
	}else{
		v = x-2;
		if(y<2){
			t = 2-y;
		}else{
			t = y-2;
		}
	}
	c = v+t;
	cout << c << endl;
	return 0;
}
