#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int maxLen(int* arr) {
	sort(arr, arr + 3); 

	int a = arr[0], b = arr[1], c = arr[2];
	
	while (c > 0) {
		if (c - b < a) {
			return a + b + c; 
		}
		c--;
	}
	
	return 0;
}

int main() {
	int arr[3];
	
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	cout << maxLen(arr); 
	
	return 0;
}
