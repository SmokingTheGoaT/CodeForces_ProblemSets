#include <iostream>
#include <string>

using namespace std;

int main(){
	string str, str2;
	cin >> str;
	for(int i=0; i<str.length(); i++){
		if(str[i] == 'A' || str[i] == 'a' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u' || str[i] == 'Y' || str[i] == 'y' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i'){
			continue;
		}
		else{
			str2 += '.';
			str2 += tolower(str[i]);
		}
	}
	cout << str2 << endl;
	return 0;
}
