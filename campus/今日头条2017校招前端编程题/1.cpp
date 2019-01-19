#include <iostream>

using namespace std;

void compare(int a, int b) {

}

int dictSort(int n, int m) {
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	
	arr.sort(); 
}

int main() {
	int n, m;
	cin >> n >> m;
	
	cout << dictSort(n, m);
	
	return 0;	
} 
