#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
	int nums[] = {2,-1,-2,3,-5,8,9,-1,-4,5};
	int lMax = 0;
	int gMax = INT_MIN;
	for(int i=0; i<10; i++){
		lMax = max(nums[i], nums[i]+lMax);
		printf("%d\n", lMax);
		if(lMax > gMax){
			gMax = lMax;
		}
	}
	return 0;
}
