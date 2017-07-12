// 2-4 subsequence
#include <iostream>
#include <cmath>

using namespace::std;

int main() {
	int m, n;
	double sum = 0.0;
	
	while (1) {
		cin >> n >> m;
		
		if (n == 0 && m == 0) {
			break;
		}
		
		for (long long i = n; i <= m; i++) {
			sum += 1.0 / pow(i, 2);
		}
		
		cout << sum << "\n";
	}
}
