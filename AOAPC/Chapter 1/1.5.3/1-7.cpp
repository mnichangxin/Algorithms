// 1-7 Äê·İ
#include <iostream>

int main() {
	int year;
	
	scanf("%d", &year);
	
	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) {
		printf("yes");
	} else {
		printf("no");
	}
} 
