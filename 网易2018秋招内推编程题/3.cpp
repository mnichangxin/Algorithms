#include<iostream>
#include <cmath>

using namespace std;

int lenStr(string s) {
	int maxLen = 0;
	int len = 1;
	
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] != s[i + 1]) {
			len++;
			
			if (i == s.length() - 2) {
				maxLen = max(len, maxLen);
			}
		} else {
			maxLen = max(len, maxLen);
			len = 1;
		}
	}
	
	return maxLen;
}

int main() {
	string s;
	cin >> s;
	
	cout << lenStr(s);
	
	return 0;
}
