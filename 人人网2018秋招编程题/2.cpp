#include <iostream>
#include <map>

using namespace std;

int maxLen(string s, int* arr) {
	map<char, int> m;
	
	for (int i = 0; i < 26; i++) {
		char c = (char)(97 + i);
		m[c] = 0;
	}
	
	for (int i = 0; i < s.length(); i++) {
		if (m[s[i]] > arr[s[i] - 97] - 1) {
			return i;
		} else {
			m[s[i]]++;
		}
	}
	
	return 0;
}

int main() {
	string s;
	cin >> s;
	int arr[26];
	for (int i = 0; i < 26; i++) {
		cin >> arr[i];
	}
	
	cout << maxLen(s, arr); 
	
	return 0;
}
