#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	int A = (a + c) / 2;
	int B = (b + d) / 2;
	int C = d - (b + d) / 2;
	
	if (A - B == a && B - C == b && A + B == c && B + C == d) {
		cout << A << " " << B << " " << C;
	} else {
		cout << "No";
	}
}
