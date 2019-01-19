#include <iostream>
#include <cstdlib>

using namespace std;

string s = "";

int binarySearch(int left, int right, int n) {
	int mid = (left + right) / 2;
	
	if (n >= mid) {
		s += "1";
		binarySearch(mid, right, n);
	} else {
		s += "0";
		binarySearch(left, mid - 1, n);
	}
}

int codeN(int n)  {
	int left = -90;
	int right = 90;
	
	binarySearch(left, right, n);
	
	return atoi(s);
}

int main() {
	int n;
	cin >> n;
	
	cout << codeN(n);
	
	return 0;
}
