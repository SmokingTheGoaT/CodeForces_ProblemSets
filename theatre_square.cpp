#include <iostream>

using namespace std;

int main(){
	long long int n, m, a;
	cin >> n >> m >> a;
	long long int answer = ((n+a-1)/a)*((m+a-1)/a);
	cout << answer;
	return 0;
}
