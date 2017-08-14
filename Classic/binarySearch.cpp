/* ¶þ·ÖËÑË÷ */ 
#include <iostream>

using namespace std;

int binarySearch(int* a, int x, int n) {
	int left = 0, right = n - 1;
	
	while (left <= right) {
		int mid = (left + right) / 2;
		
		if (x == a[mid]) {
			return mid;
		} else if (x > a[mid]) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}  
	
	return -1;
}

int main() {
	int a[] = {1, 2, 5, 7, 8, 10};
	cout << binarySearch(a, 8, 6);
	
	return 0;
} 
