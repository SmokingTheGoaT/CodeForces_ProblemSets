#include <iostream>
#include <string>

using namespace std;

int main(){
	string x, y, t, q;
	cin >> x >> y;
	for(int i=0; i<x.length(); i++){
		t += tolower(x[i]);
		q += tolower(y[i]);
	}
	if(t==q){cout << 0 << endl; return 0;}
	else if(t<q){cout << -1 << endl; return 0;}
	else{cout << 1 << endl; return 0;}
	return 0;
}
