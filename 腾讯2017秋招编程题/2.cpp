#include <iostream>
#include <cstring>

using namespace std;

int isComplete(int m, int n) {
	if (!(m >= 1 && m <= 1024 && n >= 1 && n <= 1024)) {
		return -1;
	} 
	
	int arr[1025];
	memset(arr, 1025, 0);
	
	arr[m] = 1;
	
	if (arr[n] == 1) {
		return 1;
	} else {
		return 0;
	}
	
	return 0;
}

int main() {
	int m, n;
	cin >> m >> n;
	
	cout << isComplete(m, n);
	
	return 0;
}
