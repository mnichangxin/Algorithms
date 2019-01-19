#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	string res = "";
	int count = 1;
	
	for (int i = 0; i < s.length(); i++) {	
		if (s[i] == s[i + 1]) {
			count++; 
		} else {
			stringstream ss;
			ss << count;
			res = res + ss.str() + s[i];
			count = 1;
		}
	}
	
	cout << res;
	
	return 0;
} 
