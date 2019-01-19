#include <iostream>

using namespace std;

long f(long n) {
	if (n % 2 != 0) {
		return n;
	} else if (n % 2 == 0 && n % 3 == 0) {
		return n / 2;
	} else {
		return 1;
	}
}

int main() {
	long N;
	cin >> N;

	long sum = 0;

	for (long i = 1; i <= N; i++) {
		sum += f(i); 
	}
	
	cout << sum;
	
	return 0;	
}
