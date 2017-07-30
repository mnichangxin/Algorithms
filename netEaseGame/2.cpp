#include <iostream>

using namespace std;

int main() {
	int n, d;
	
	cin >> n;
	cin >> d;
	
	int arr[n][n];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j]; 
		}
	}
	
	int min = INT_MAX;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (k = 0; k < n - d + 1; k++) {
				if (arr[i][j] < INT_MAX) {
					min = arr[i][j];
				}
			}
		}
	}
	
	return 0;
}
