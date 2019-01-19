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
	
	int max = 0;
	
	// ºáÏò 
	for (int i = 0; i < n; i++) {
		int count = 0;

		for (int j = 0; j < n - d + 1; j++) {
			for (int k = j; k <= j + n - d + 1; k++) {
				count += arr[i][j];
			}
		}	
		
		if (count >= max) {
			max = count;
		}	
	}
	
	// ×ÝÏò
	for (int i = 0; i < n - d + 1; i++) {
		int count = 0;
		
		for (int j = 0; j < n; j++) {
			for (int k = j; k <= j + n - d + 1; k++) {
				count += arr[j][i];
			}
		}	
		
		if (count >= max) {
			max = count;
		}	
	}
	
	// Ð±Ïò 	
	for (int i = 0; i < n; i++) {
		int count1 = 0;
		int count2 = 0;
		
		for (int j = 0; j < n - d + 1; j++) {
			for (int k = j; k <= j + n - d + 1; k++) {
				if (i == j) {
					count1 += arr[i][j];
					count2 += arr[i][n - i - 1];
				}
			}
		} 
		
		if (count1 >= max) {
			max = count1;
		} else if (count2 >= max) {
			max = count2;
		}
	}
	
	cout << max;
	
	return 0;
}
