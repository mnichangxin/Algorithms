#include <iostream>
#include <stack>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	stack<char> sk;
	sk.push(s[0]);
	
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == ']' && sk.top() == '[') {
			sk.pop();
		} else {
			sk.push(s[i]);
		}
	}
	
	while (!sk.empty()) {
		char top = sk.top();
		sk.pop();
		if (top == '[') {
			s += ']';
		} else {
			s = '[' + s;
		}
	}
	
	cout << s;
	
	return 0;
} 
