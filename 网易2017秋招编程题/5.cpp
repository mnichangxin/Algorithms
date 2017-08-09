#include <iostream>
#include <sstream>

using namespace std;

int rev(int n) {
	stringstream ss;
	ss << n;
	
	string s = ss.str();
	string temp = "";
	
	int i = s.length() - 1;
	while (s[i] == '0') {
		i--;
	}
	
	for (int j = i; j >= 0; j--) {
		temp += s[j];
	}
	
	stringstream rs;
	rs << temp;
	
	int res;
	rs >> res;
	
	return res;
}

int main() {
	int x, y;
	
	cin >> x;
	cin >> y;

	cout << rev(rev(x) + rev(y));

	return 0;
}	
