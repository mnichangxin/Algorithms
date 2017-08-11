/* Ä§Á¦ÊÖ»· */
#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < k; i++) {		
		int temp = arr[0];
		for (int j = 0; j < n; j++) {
			if (j == n - 1) {
				arr[j] += temp;
			} else {
				arr[j] += arr[j + 1];
			}
			
			if (arr[j] >= 100) {
				arr[j] %= 100;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (i != n -1) {
			cout << arr[i] << " ";	
		} else {
			cout << arr[i];
		}
	}	
	
	return 0;
}
