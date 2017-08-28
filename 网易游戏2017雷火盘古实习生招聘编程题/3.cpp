/* Ë«ºË´¦Àí */
#include <iostream>

using namespace std;

int main() {
	int n ;
	cin >> n;
	
	int arr[n];
	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; 
		arr[i] = arr[i] / 1024;
		sum += arr[i];
	}
	
	int task[sum / 2 + 1];
	
	for (int i = 0; i < n; i++) {
		for (int j = sum / 2; j >= arr[i]; j--) {
			task[j] = max(task[j], task[j - arr[i]] + arr[i]);
		}
	}
	
	cout << max(task[sum / 2], sum - task[sum / 2]) * 1024;
	
	return 0;
}
