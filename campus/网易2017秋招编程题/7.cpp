#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int i = n / 6;
	int j = n / 8;
	
	int minn = 100;
	
	for (int x = 0; x <= i; x++) {
		for (int y = 0; y <= j; y++) {
			if (6 * x + 8 * y == n) {
				minn = min(minn, x + y);
			}
		}
	}
	
	if (minn == 100) {
		cout << -1;
	} else {
		cout << minn;
	}
	
	return 0;
} 
