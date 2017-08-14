/* ©ЛкыеепР */
#include <iostream>

using namespace std;

void quickSort(int* a, int left, int right) {
	if (left < right) {
		int key = a[left];
		int low = left;
		int high = right;
		
		while (low < high) {
			while (low < high && a[high] > key) {
				high--;
			}	
			a[low] = a[high];
			while (low < high && a[low] < key) {
				low++;
			}
			a[high] = a[low];
		}
		
		a[low] = key;
		
		quickSort(a, left, low - 1);
		quickSort(a, low + 1, right);
	}
}

int main() {
	int a[] = {2, 4, 9, 3, 6, 7, 1, 5};
	
	quickSort(a, 0, 7);
	
	for (int i = 0; i < sizeof(a); i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}
