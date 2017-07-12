// 2-3 triangle
#include <iostream>

using namespace::std;

int main() {
	int n;
	
	cin >> n;
	
	if (n > 20) {
		return -1;
	}
	
	for (int i = n; i >= 1; i--) {
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		}
		for (int k = 0 ;k < 2 * i - 1; k++) {
			cout << "#"; 
		} 
		cout << "\n";
	}
}
