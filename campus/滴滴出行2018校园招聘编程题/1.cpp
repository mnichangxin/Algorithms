#include <iostream>

using namespace std;

int getXOR(int* arr, int n) {
	
	int count = 0;
	int start = 0;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			count++;
			start = i + 1;;
			continue;
		}
		
		for (int j = start; j < i; j++) {
			int flag = 0;
			for (int k = j; k <= i; k++) {
				flag ^= arr[i];
			}
			if (flag == 0) {
				count++;
				start = i + 1;
				continue;
			}
		}
	}
	
	return count;
}

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << getXOR(arr, n);
	
	return 0;
}
