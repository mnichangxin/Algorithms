#include <iostream>
#include <string> 
#include <set>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	set<char> v;
	
	int count = 0;
	
	for (int i = 0; i < s.length() - 1; i++) {
		v.insert(s[i]);
	}
	
	if (v.size() == 2) {
		cout << 2;
	} else if (v.size() == 1) {
		cout << 1;
	}else {
		cout << 0;
	}

	return 0;
} 
