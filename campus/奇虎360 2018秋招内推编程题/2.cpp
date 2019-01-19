#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int res[n];
	for (int i = 0; i < n; i++) {
		res[i] = 0;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[i]) {
				res[i]++;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (i != n - 1) {
			cout << res[i] << " ";
		} else {
			cout << res[i];
		}	
	}
	
	return 0;
}
