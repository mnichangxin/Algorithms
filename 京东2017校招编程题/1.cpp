#include<iostream>

using namespace std;

int watch (int* arr, int n) {	
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i + 1] >= arr[i]) {
			for (int j = i; j >= 0; j--) {
				if (arr[i + 1] >= arr[j]) {
					count++;
				} else {
					count++;
					break;
				}
			}
		} else {
			count++;
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

	cout << watch(arr, n);
	
	return 0;
} 
