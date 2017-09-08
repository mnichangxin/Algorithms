#include <iostream>

using namespace std;

int indexStr(string s) {
	int index = 0;
	
	for (int i = 0; i < s.length(); i++) {
		int value = int(s[i]) - 97;
		index += value;
	}
	
	return index;
}

int main() {
	string s;
	cin >> s;
	
	cout << indexStr(s);
	
	return 0;
}
