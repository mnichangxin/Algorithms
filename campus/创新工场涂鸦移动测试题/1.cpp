#include <iostream>

using namespace std;

bool IsValidIP(string s) {
	for (int i = 0, len = s.length(); i < len; i++) {
		if (!isdigit(s[i]) && s[i] != '.') {
			return false;
		}
	} 
	
	int count = 0; 
	for (int i = 0, len = s.length(); i < len; i++) {
		if (isdigit(s[i]) && s[i + 1] == '.') {
			count++;
		}
	} 
	if (count != 3) {
		return false;
	}
	
	string temp = "";
	for (int i = 0, len = s.length(); i < len; i++) {
		if (s[i] != '.') {
			temp += s[i];
		} else {
			if (atoi(temp.c_str()) <= 255) {
				temp = "";
			} else {
				return false;
			}
		}
	}
	if (atoi(temp.c_str()) > 255) {
		return false;
	} 
	
	return true;
}	

int main() {
	string s;
	cin >> s;
		
	if (IsValidIP(s)) {
		cout << "�Ϸ���IP";
	} else {
		cout << "���Ϸ���IP"; 
	}
		
	return 0;
} 
