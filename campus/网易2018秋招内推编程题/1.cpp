#include <iostream>
#include <set>

using namespace std;

int fun(string s) {
	set<int> q;
	
	for (int i = 0; i < s.length(); i++) {
		q.insert(s[i]);
	}
	
	int len = q.size();
	
	if (len == 1) {
		return 1;
	} else if (len == 2) {
		return 2;
	} else if (len > 2) {
		return 0;
	}
	
	return 0;
}

int main() {
	string s;
	cin >> s;
	
	cout << fun(s);
	
	return 0;
} 
