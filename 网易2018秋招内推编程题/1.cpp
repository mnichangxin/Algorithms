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
	
	int n = v.size();
	int sum = 1;
	
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	
	cout << sum;
	
	return 0;
} 
