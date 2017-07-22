#include <iostream>

using namespace std;

void replaceSpace(char *str, int length) {
	if (str == NULL || length <= 0) {
		return;
	}
	
	int originalLength = 0;
	int numberOfBlank = 0;
	int i = 0;
	
	while (str[i] != '\0') {
		++originalLength;
		if (str[i] == ' ') {
			++numberOfBlank;
		}
		++i;
	}
	
	int newLength = originalLength + numberOfBlank * 2;
	
	int indexOfOriginal = originalLength;
	int indexOfNew = newLength;
	
	while (indexOfOriginal >=0 && indexOfNew > indexOfOriginal) {
		if (str[indexOfOriginal] == ' ') {
			str[indexOfNew --] = '0';
			str[indexOfNew --] = '2';
			str[indexOfNew --] = '%';
		} else {
			str[indexOfNew --] = str[indexOfOriginal];
		}
		--indexOfOriginal;
	}
	
	int j = 0;
	
	while (str[j] != '\0') {
		cout << str[j];
		j++;
	}
}

int main() {
	char str[] = {'W', 'e', ' ', 'a', 'r', 'e', ' ', 'h', 'a', 'p', 'p', 'y', '.'};
	replaceSpace(str, 14);
}
