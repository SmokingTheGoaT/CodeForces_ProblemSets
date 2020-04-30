#include <iostream>

using namespace std;

int main(){
	int n, c=0, p[3]; 
	cin >> n;
	while(n--){
		int x=0;
		for(int i=0; i<3; i++){
			cin >> p[i];
			if(p[i] == 1){x++;}
		}
		if(x>=2){
			c++;
		}
	}
	cout << c << endl;
	return 0;
}
