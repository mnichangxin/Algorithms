#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	int count = 0;
	int temp = 1;
	
	for (int i = 0; i < s.length() - 2; i++) {
		if (s[i] != s[i + 1]) {
			temp++;
		} else {
			count = max(temp, count);
			temp = 1;
		}
	}	
	
	cout << count;
	
	return 0;
}
