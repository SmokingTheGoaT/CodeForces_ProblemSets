#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	char s[1000];
	scanf("%s", s);
	if(islower(s[0])){
		s[0]=toupper(s[0]);
	}
	printf("%s", s);
	return 0;
}
