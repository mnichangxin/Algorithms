// 1-4 sin and cos
#include <iostream>
#include <cmath>

int main() {
	int n;
	
	scanf("%d", &n);
	
	if (n >= 360) {
		return -1;
	}
	
	printf("%f %f", sin(n * M_PI / 180), cos(n) * M_PI / 180);
} 
