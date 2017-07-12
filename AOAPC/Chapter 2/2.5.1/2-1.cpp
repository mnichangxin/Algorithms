// 2-1 daffodill
#include <iostream>
#include <cmath>

int main() {
	int a, b, c;
	
	for (int i = 100; i <= 999; i++) {
		a = i / 100;
		b = i % 100 / 10;
		c = i % 100 % 10;
		
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
			printf("%d\n", i);
		}
	}
} 
