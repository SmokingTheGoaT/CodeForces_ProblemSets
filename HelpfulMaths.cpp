#include <iostream>

using namespace std;

int main(){
	int c1=0, c2=0, c3=0;
	char ch;
	while(ch=getchar()){
		if(ch=='1'){c1++;}
		else if(ch=='2'){c2++;}
		else if(ch=='3'){c3++;}
		else if(ch=='\n'){break;}
	}
	bool first = true;
	for(int i=0; i<c1; i++){
		if(first==true){
			cout << "1";
			first = false;
		}else{cout << "+1";}
	}for(int i=0; i<c2; i++){
		if(first==true){
			cout << "2";
			first = false;
		}else{cout << "+2";}
	}for(int i=0; i<c3; i++){
		if(first==true){
			cout << "3";
			first = false;
		}else{cout << "+3";}
	}cout << endl;
	return 0;
}


