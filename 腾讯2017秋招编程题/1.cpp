#include <iostream>

using namespace std;

int indexStr(string s) {
	int index = 0;
	
	int base[4]; 
	base[3] = 1;
	
	for (int i = 2; i >= 0; i--) {
		base[i] = base[i + 1] * 25 + 1; 
	}
	
	for (int j = 0; j < s.length(); j++) {
		index += ((s[j] - 'a') * base[j] + 1);
	}		
	
	return index - 1;
}

int main() {
	string s;
	cin >> s;
	
	cout << indexStr(s);
	
	return 0;
}
