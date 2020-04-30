#include <stdio.h>

using namespace std;

int main(){
	int j, c=0;
	scanf("%d", &j);
	char s[j];
	scanf("%s", s);
	for(int i=0; i<j; i++){
		if(s[i] == s[i+1]){
			c++;
		}
	}printf("%d", c);
	return 0;
}
