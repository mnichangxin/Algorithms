#include <iostream>

using namespace std;

int minPaint(string s) {
	int numR = 0;
	int numG = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'R') {
			numR++;
		} else if (s[i] == 'G') {
			numG++;
		}
	}
	
	
	int res = 0;
	for (int i = 0; i < numR; i++) {
		if (s[i] == 'G') {
			res += 1;
		}
	}
	for (int i = numR; i < s.length(); i++) {
		if (s[i] == 'R') {
			res += 1;
		}
	}
	
	return res;
}

int main() {
	string s;
	cin >> s;
	
	cout << minPaint(s);
	
	return 0;	
}
