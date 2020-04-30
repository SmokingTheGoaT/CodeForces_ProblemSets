#include <iostream>

using namespace std;

int main(){
	int c=0, c1=0;
	string str="";
	cin >> str;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='0'){
			c++;
			if(c==7){
				cout << "YES" << endl;
				return 0;
			}
			c1=0;
		}else if(str[i]=='1'){
			c1++;
			if(c1==7){
				cout << "YES" << endl;
				return 0;
			}
			c=0;
		}
	}
	if(c<7 || c1<7){cout << "NO" << endl;}
	/*char ch;
	while(ch=getchar()){
		if(ch=='0'){
			c++;
			if(c==7){
				cout << "YES" << endl;
				return 0;
			}
			c1=0;
		}else if(ch=='1'){
			c1++;
			if(c1==7){
				cout << "YES" << endl;
				return 0;
			}
			c=0;
		}else if(ch=='\n'){break;}
	}cout << "NO" << endl;*/
	return 0;
}
