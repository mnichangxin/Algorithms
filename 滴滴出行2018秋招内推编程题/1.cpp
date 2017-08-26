#include <iostream>
#include <vector>

using namespace std;

int main(){
	int curSum = 0, maxSum = -0x3f3f3f;
	
	
	vector<int> arr;
	int in;
	
	while (cin >> in) {
		arr.push_back(in);
		curSum += in;
		
		if(curSum > maxSum){
			maxSum = curSum;
		}
		
		if(curSum < 0){
			curSum = 0;
		}
	}
	
	cout << maxSum << endl;
	
	return 0;
}
