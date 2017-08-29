#include <iostream>

using namespace std;

// ±©Á¦ËÑË÷ 
int maxArea(int* arr, n) {
	double smax, simax, si;
	for (int i = 0; i < n; i++) {
		int h = arr[i];
		simax = 0;
		si = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j] >= h) {
				si += h;
			} else {
				si = 0;
			}
		}
		if (simax > smax) {
			smax = simax;
		}
	}
	
	return smax;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << maxArea(arr, n); 
	
	return 0;
}
