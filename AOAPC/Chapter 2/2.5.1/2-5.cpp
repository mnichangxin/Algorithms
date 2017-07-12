// 2-2 decimal
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace::std;

int main() {
	double a, b;
	int c;
	
	while (1) {
		cin >> a >> b >> c;
		
		if (a == 0 && b == 0 && c ==0) {
			break;
		}
		
		if ( a <= pow(10, 6) && b <= pow(10 ,6) && c <= 100) {
			cout << setprecision(c) << a / b << "\n";
		} else {
			return -1;
		}
	}
}


