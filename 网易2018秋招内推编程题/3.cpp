#include <iostream>

using namespace std;

int main() {
	int x, f, d, p;
	cin >> x >> f >> d >> p;
	
	int day = 0;
	
	while (d >= 0 && f >= 0) {
		d = d - x;
		f--;
		
		if (f < d / x) {
			x -= p;
			f++;
		}
		
		day++;
	}
	
	cout << day;
	
	return 0;
} 
