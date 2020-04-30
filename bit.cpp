#include <iostream>

using namespace std;

int main(){
	int n, x=0;
	string l;
	cin >> n;
	while(n--){
		cin >> l;
		if(l == "X++"){
			x++;
		}else if(l == "++X"){
			++x;
		}else if(l == "X--"){
			x--;
		}else if(l == "--X"){
			--x;
		}
	}
	cout << x << endl;
	return 0;
}
