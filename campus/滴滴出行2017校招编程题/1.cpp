#include <iostream>

using namespace std;

int main(){
	int n, curSum = 0, maxSum = -0x3f3f3f;

	cin >> n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin >> arr[i];
		curSum += arr[i];
		
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
